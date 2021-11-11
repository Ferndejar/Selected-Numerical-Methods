#include "SubseriesWindow.h"
#include "include\\lista.h"
#include "input.h"


SubseriesWindow::SubseriesWindow(QWidget * parent):
	QMainWindow(parent) {
	ui.setupUi(this);
}

SubseriesWindow::~SubseriesWindow() {
}

void SubseriesWindow::resetUI() {
	/*!
	Metoda ustawia startowe parametry w kontrolkach
	*/
	ui.numberEditBox->setText("0");
	ui.quotientEditBox->setText("0");
	ui.resultTextBox->setText("");
}

void SubseriesWindow::on_computeButton_clicked() {
	float number; /*!< liczba dla której znajdujemy podszereg */
	float precision; /*!< zadana dokladnoœæ */
	float quotient; /*!< iloraz szeregu */
	try {
		number = getFloat(ui.numberEditBox); // przypisanie wartoœci z kontrolki numberEditBox(liczba)
		precision = getFloat(ui.precisionEditBox); // przypisanie wartoœci z kontrolki precisionEditBox(dok³adnoœæ)
		quotient = getFloat(ui.quotientEditBox); // przypisanie wartoœci z kontrolki quotientEditBox(iloraz szeregu)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}

	QString resultText;
	lista list;

	if (ui.condCoincidentRadioButton->isChecked()) {
		float support_variable; /*!< zmienna pomocnicza */
		int index; /*!< indeks wyrazu szeregu */
		support_variable = number;

		if (precision <= 0)
		{
			/*Dok³adnoœæ powinna byæ liczba dodatnia.
			Program sprawdza czy podano liczbê dodatnia i jeœli nie, pozwala wpisaæ ponownie*/

			//majoryzuje czyli szacuje z gory
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>5 || number<-5) {
			/*Program sprawdza czy podana liczba mieœci siê w przedziale [-5,5], gwarantuje to jego szybk¹ pracê i zabezpiecza przed olbrzymi¹ d³ugoœci¹ zwracanego wyniku*/
			resultText += QString("Obliczenia beda trwac zbyt dlugo. Podaj jeszcze raz liczbe z zakresu [-5,5]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		/*!
		Algorytm w zale¿noœci od wybranej liczby ustala czy dzia³amy na wyrazach dodatnich czy ujemnych (indeksach parzystych albo nieparzystych). Znak wyrazów jest taki sam jak znak wybranej liczby.
		Ponadto wyklucza zu¿yte juz wartoœci, po zu¿yciu indeksu przechodzimy na nastêpne indeksy wykorzystuj¹c wy³¹cznie wyrazy parzyste albo nieparzyste.
		Algorytm dzia³a w taki sposób, aby liczbê dodatni¹ przybli¿aæ od do³u a liczbê ujemn¹ od góry (otrzymany wynik bêdzie zawsze mniejszy niz wybrana liczba dodatnia lub wiêkszy od wybranej liczby ujemnej) */
		if (support_variable>0) {
			index = 2;
			while (support_variable>precision) {
				if (support_variable>1/(float)(index)) {
					list.insert(index);
					support_variable = (support_variable-(1/(float)(index)));
					index = index+2;
				}
				else {
					index = index+2;
				}
			}
		}
		else {
			index = 1;
			while (support_variable<-precision) {
				if (support_variable<-1/(float)(index)) {
					list.insert(index);
					support_variable = (support_variable+(1/(float)(index)));
					index = index+2;
				}
				else {
					index = index+2;
				}
			}
		}
		resultText += list.toString() += QString("\nSuma podszeregu wynosi: ") += QString::number(number-support_variable) += '\n';
	}
	else if (ui.greedyRadioButton->isChecked()) {
		float current_term; /*!<  bierz¹cy wyraz szeregu */
		float support_variable; /*!< zmienna pomocnicza */
		int index; /*!< indeks wyrazu szeregu */

		if (precision <= 0)
		{
			/*Dok³adnoœæ powinna byæ liczba dodatnia.
			Program sprawdza czy podano liczbê dodatnia i jeœli nie, pozwala wpisaæ ponownie*/

			//majoryzuje czyli szacuje z góry
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0.5 && quotient>0) {
			/*Rozwa¿amy szereg, którego zbiór osi¹galny ma byæ przedzia³em, a wiêc szereg jest wolno zbie¿ny. Szereg geometryczny jest wolno zbie¿ny gdy iloraz mieœci siê w przedziale [0.5,1)*/
			resultText += QString("Twoj iloraz nie gwarantuje wolnej zbieznosci szeregu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient>=1) {
			/*Rozwa¿amy szereg, którego zbiór osi¹galny ma byæ przedzia³em, a wiêc szereg jest wolno zbie¿ny. Szereg geometryczny jest wolno zbie¿ny gdy iloraz mieœci siê w przedziale [0.5,1)*/
			resultText += QString("Szereg nie jest bezwglednie zbiezny dla zdefiniowanego ilorazu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0) {
			/*Rozwa¿amy szereg, którego zbiór osi¹galny ma byæ przedzia³em, a wiêc szereg jest wolno zbie¿ny. Szereg geometryczny jest wolno zbie¿ny gdy iloraz mieœci siê w przedziale [0.5,1)*/
			resultText += QString("Nie rozwazamy ilorazow ujemnych. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>quotient/(1.0-quotient)) {
			/*Zbiór osi¹galny jest przedzialem [0, q/(1-q)] domkniêty obustronnie. Nale¿y podaæ liczbê z tego przedzia³u.*/
			resultText += QString("Twoja liczba jest za duza. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number<0) {
			/*Zbiór osi¹galny jest przedzialem [0, q/(1-q)] domkniêty obustronnie. Nale¿y podaæ liczbê z tego przedzia³u.*/
			resultText += QString("Twoja liczba jest ujemna. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		
		current_term = quotient; //bierzacy wyraz szeregu
		support_variable = number; 
		index = 1;
		/*! Dzia³amy na szeregu geometrycznym o wybranym ilorazie.
		Algorytm greedy dzia³a wed³ug zasady sumuj kiedy mo¿esz. Oznacza to, ¿e sumujemy wyrazy szeregu dokladnie wtedy gdy poprzez dodanie wyrazu nie przekroczymy wartoœci przybli¿anej liczby */
		
		while (support_variable>precision) {
			if (support_variable>current_term) {
				list.insert(index);
				support_variable = (support_variable-current_term); // ró¿nica miêdzy przybli¿an¹ liczb¹ a bierz¹ca sum¹ czeœciow¹
				index++;
				current_term = quotient*current_term; //  wartoœæ aktualnie rozwa¿anego wyrazu - 
			}
			else {
				index++;
				current_term = quotient*current_term; // zwiêkszamy potêge q(ilorazu) o jeden
			}
		}
		resultText += list.toString() += QString("\nSuma podszeregu wynosi: ") += QString::number(number-support_variable) += '\n';

	}
	else if (ui.lazyRadioButton->isChecked()) {
		float tail; /*!< bierz¹cy ogon szeregu */
		float support_variable; /*!< zmienna pomocnicza */
		float current_term; /*!< bierz¹cy wyraz szeregu */
		int index; /*!< indeks wyrazu szeregu */

		if (precision <= 0)
		{
			/*Dok³adnoœæ powinna byæ liczba dodatnia.
			Program sprawdza czy podano liczbê dodatnia i jeœli nie, pozwala wpisaæ ponownie*/

			//majoryzuje czyli szacuje z gory
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0.5 && quotient>0) {
			/*Rozwa¿amy szereg, którego zbiór osi¹galny ma byæ przedzia³em, a wiêc szereg jest wolno zbie¿ny. Szereg geometryczny jest wolno zbie¿ny gdy iloraz mieœci siê w przedziale [0.5,1)*/
			resultText += QString("Twoj iloraz nie gwarantuje wolnej zbieznosci szeregu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient>=1) {
			/*Rozwa¿amy szereg, którego zbiór osi¹galny ma byæ przedzia³em, a wiêc szereg jest wolno zbie¿ny. Szereg geometryczny jest wolno zbie¿ny gdy iloraz mieœci siê w przedziale [0.5,1)*/
			resultText += QString("Szereg nie jest bezwglednie zbiezny dla zdefiniowanego ilorazu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0) {
			/*Rozwa¿amy szereg, którego zbiór osi¹galny ma byæ przedzia³em, a wiêc szereg jest wolno zbie¿ny. Szereg geometryczny jest wolno zbie¿ny gdy iloraz mieœci siê w przedziale [0.5,1)*/
			resultText += QString("Nie rozwazamy ilorazow ujemnych. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>quotient/(1.0-quotient)) {
			/*Zbiór osi¹galny jest przedzialem [0, q/(1-q)] domkniêty obustronnie. Nale¿y podaæ liczbê z tego przedzia³u.*/
			resultText += QString("Twoja liczba jest za duza. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number<0) {
			/*Zbiór osi¹galny jest przedzialem [0, q/(1-q)] domkniêty obustronnie. Nale¿y podaæ liczbê z tego przedzia³u.*/
			resultText += QString("Twoja liczba jest ujemna. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		//quotient - iloraz
		current_term = quotient;
		tail = pow(quotient, 2)/(1.0-quotient);
		support_variable = number;

		index = 1;
		/*!Dzia³amy na szeregu geometrycznym o wybranym ilorazie.
		Algorytm lazy dzia³a wed³ug zasady sumuj kiedy musisz. Oznacza to, ¿e sumujemy wyrazy szeregu dok³adnie wtedy gdy ich pominiêcie uniemo¿liwi³oby uzyskanie przybli¿enia wskazanej liczby.
		Wykrywamy to poprzez zbyt ma³e ogony szeregu (Sumy prawie wszystkich wyrazów z pominiêciem skoñczenie wielu pocz¹tkowych)*/

		while (support_variable>precision) {
			if (support_variable>tail) {
				list.insert(index);
				support_variable = (support_variable-current_term);
				index++;
				tail = quotient*tail; // wartoœæ kolejnego ogonu 
				current_term = quotient*current_term; //  wartoœæ aktualnie rozwa¿anego wyrazu - przechodzimy do nastêpnego wyrazu w szeregu geometrycznym
			}
			else {
				index++;
				tail = quotient*tail;
				current_term = quotient*current_term; // zwiêkszamy potêge q(ilorazu) o jeden - przechodzimy do nastêpnego wyrazu w szeregu geometrycznym
			}
		}
		resultText += list.toString() += QString("\nSuma podszeregu wynosi: ") += QString::number(number-support_variable) += '\n';
	}
	else if (ui.gapsRadioButton->isChecked()) {
		float current_term; // bierzacy wyraz szereg
		float support_variable; // zmienna pomocnicza
		float tail; //bierzaca suma ogonu
		int index; //  indeks wyrazu szeregu
		
		if (precision <= 0)
		{
			/*Dok³adnoœæ powinna byæ liczba dodatnia.
			Program sprawdza czy podano liczbê dodatnia i jeœli nie, pozwala wpisaæ ponownie*/

			//majoryzuje czyli szacuje z gory
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient >= 1) {
			/*Szereg mo¿e byæ wolnozbiezny i wtedy nie ma luk i dzia³a jak greedy q nale¿y [0.5, 1) ale mo¿e te¿ nie byæ wolny zbiezny q nalezy [0,0.5) i wtedy mo¿emy trafiæ w Luke. St¹d chcemy aby q nale¿a³ do przedzia³u (0,1)*/
			resultText += QString("Szereg nie jest bezwglednie zbiezny dla zdefiniowanego ilorazu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0) {
			/*Szereg mo¿e byæ wolnozbiezny i wtedy nie ma luk i dzia³a jak greedy q nale¿y [0.5, 1) ale mo¿e te¿ nie byæ wolny zbiezny q nalezy [0,0.5) i wtedy mo¿emy trafiæ w Luke. St¹d chcemy aby q nale¿a³ do przedzia³u (0,1)*/
			resultText += QString("Nie rozwazamy ilorazow ujemnych. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>quotient/(1.0-quotient)) {
			/*Zbiór osi¹galny mieœci siê w przdziale [0 q/(1-q)], dlatego te¿ liczba powinna byæ z tego przedzia³u*/
			resultText += QString("Twoja liczba jest za duza. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number<0) {
			/*Zbiór osi¹galny mieœci siê w przdziale [0 q/(1-q)], dlatego te¿ liczba powinna byæ z tego przedzia³u*/
			resultText += QString("Twoja liczba jest ujemna. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		
		tail = quotient/(1.0-quotient);
		current_term = quotient;
		support_variable = number;

		index = 1;
		/*!Dzia³amy na szeregu geometrycznym o wybranym ilorazie.
		Algorytm dzia³a wed³ug zasady sumuj kiedy mo¿esz. Okazuje siê, ¿e pominiêcie wyrazu mo¿e  uniemozliwiæ uzyskanie przybli¿enia wskazanej liczby.
		W tym przypadku  wykrywamy to poprzez zbyt ma³e ogony szeregu (Sumy prawie wszystkich wyrazów z pominiêciem skoñczenie wielu pocz¹tkowych) i zwracany jest komunikat o lukach */
		


		while (support_variable>precision && support_variable<tail) {
			if (support_variable>current_term) {
				list.insert(index);
				support_variable = (support_variable-current_term); // przechowuje ró¿nice pomiêdzy zsumowanymi juz wyrazami a wartoœci¹ któr¹ przybli¿amy
			}
			index++;
			current_term = quotient*current_term;
			tail = quotient*tail;
		}
		if (support_variable>=tail) { // Pozosta³y ogon szeregu nie wystarcza do wysumowania naszej liczby
			resultText += QString("Wpadlismy w srodek luki, nie istnieje podszereg przyblizajacy podana wartosc z zadana dokladoscia\n");
		}
		else {
			resultText += list.toString() += QString("\nSuma podszeregu wynosi: ") += QString::number(number-support_variable) += '\n';
		}
	}

	ui.resultTextBox->setText(resultText);
}

void SubseriesWindow::on_condCoincidentRadioButton_toggled(bool on) {
	/*!
	Metoda wy³¹cza kontrolkê z ilorazem gdy wybierzemy szereg warunkowo zbie¿ny
	*/
	ui.quotientEditBox->setEnabled(!on);
}

void SubseriesWindow::on_actionConditionally_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do szeregu warunkowo zbie¿nego
	*/
	subseriesHelp.show();
}

void SubseriesWindow::on_actionGreedy_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do szeregu greedy
	*/
	subseriesGreedyHelp.show();
}

void SubseriesWindow::on_actionLazy_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do szeregu lazy
	*/
	subseriesLazyHelp.show();
}

void SubseriesWindow::on_actionGaps_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do szeregu z lukami
	*/
	subseriesGapsHelp.show();
}

void SubseriesWindow::on_actionConditionallyExample_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do szeregu warunkowo zbie¿nego
	*/
	subseriesExample.show();
	
}
void SubseriesWindow::on_actionGreedyExample_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do szeregu greedy
	*/
	subseriesGreedyExample.show();
}

void SubseriesWindow::on_actionLazyExample_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do szeregu lazy
	*/
	subseriesLazyExample.show();
}

void SubseriesWindow::on_actionGapsExample_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do szeregu z lukami
	*/
	subseriesGapsExample.show();
}