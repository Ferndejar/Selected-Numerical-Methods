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
	float number; /*!< liczba dla kt�rej znajdujemy podszereg */
	float precision; /*!< zadana dokladno�� */
	float quotient; /*!< iloraz szeregu */
	try {
		number = getFloat(ui.numberEditBox); // przypisanie warto�ci z kontrolki numberEditBox(liczba)
		precision = getFloat(ui.precisionEditBox); // przypisanie warto�ci z kontrolki precisionEditBox(dok�adno��)
		quotient = getFloat(ui.quotientEditBox); // przypisanie warto�ci z kontrolki quotientEditBox(iloraz szeregu)
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
			/*Dok�adno�� powinna by� liczba dodatnia.
			Program sprawdza czy podano liczb� dodatnia i je�li nie, pozwala wpisa� ponownie*/

			//majoryzuje czyli szacuje z gory
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>5 || number<-5) {
			/*Program sprawdza czy podana liczba mie�ci si� w przedziale [-5,5], gwarantuje to jego szybk� prac� i zabezpiecza przed olbrzymi� d�ugo�ci� zwracanego wyniku*/
			resultText += QString("Obliczenia beda trwac zbyt dlugo. Podaj jeszcze raz liczbe z zakresu [-5,5]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		/*!
		Algorytm w zale�no�ci od wybranej liczby ustala czy dzia�amy na wyrazach dodatnich czy ujemnych (indeksach parzystych albo nieparzystych). Znak wyraz�w jest taki sam jak znak wybranej liczby.
		Ponadto wyklucza zu�yte juz warto�ci, po zu�yciu indeksu przechodzimy na nast�pne indeksy wykorzystuj�c wy��cznie wyrazy parzyste albo nieparzyste.
		Algorytm dzia�a w taki spos�b, aby liczb� dodatni� przybli�a� od do�u a liczb� ujemn� od g�ry (otrzymany wynik b�dzie zawsze mniejszy niz wybrana liczba dodatnia lub wi�kszy od wybranej liczby ujemnej) */
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
		float current_term; /*!<  bierz�cy wyraz szeregu */
		float support_variable; /*!< zmienna pomocnicza */
		int index; /*!< indeks wyrazu szeregu */

		if (precision <= 0)
		{
			/*Dok�adno�� powinna by� liczba dodatnia.
			Program sprawdza czy podano liczb� dodatnia i je�li nie, pozwala wpisa� ponownie*/

			//majoryzuje czyli szacuje z g�ry
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0.5 && quotient>0) {
			/*Rozwa�amy szereg, kt�rego zbi�r osi�galny ma by� przedzia�em, a wi�c szereg jest wolno zbie�ny. Szereg geometryczny jest wolno zbie�ny gdy iloraz mie�ci si� w przedziale [0.5,1)*/
			resultText += QString("Twoj iloraz nie gwarantuje wolnej zbieznosci szeregu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient>=1) {
			/*Rozwa�amy szereg, kt�rego zbi�r osi�galny ma by� przedzia�em, a wi�c szereg jest wolno zbie�ny. Szereg geometryczny jest wolno zbie�ny gdy iloraz mie�ci si� w przedziale [0.5,1)*/
			resultText += QString("Szereg nie jest bezwglednie zbiezny dla zdefiniowanego ilorazu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0) {
			/*Rozwa�amy szereg, kt�rego zbi�r osi�galny ma by� przedzia�em, a wi�c szereg jest wolno zbie�ny. Szereg geometryczny jest wolno zbie�ny gdy iloraz mie�ci si� w przedziale [0.5,1)*/
			resultText += QString("Nie rozwazamy ilorazow ujemnych. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>quotient/(1.0-quotient)) {
			/*Zbi�r osi�galny jest przedzialem [0, q/(1-q)] domkni�ty obustronnie. Nale�y poda� liczb� z tego przedzia�u.*/
			resultText += QString("Twoja liczba jest za duza. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number<0) {
			/*Zbi�r osi�galny jest przedzialem [0, q/(1-q)] domkni�ty obustronnie. Nale�y poda� liczb� z tego przedzia�u.*/
			resultText += QString("Twoja liczba jest ujemna. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		
		current_term = quotient; //bierzacy wyraz szeregu
		support_variable = number; 
		index = 1;
		/*! Dzia�amy na szeregu geometrycznym o wybranym ilorazie.
		Algorytm greedy dzia�a wed�ug zasady sumuj kiedy mo�esz. Oznacza to, �e sumujemy wyrazy szeregu dokladnie wtedy gdy poprzez dodanie wyrazu nie przekroczymy warto�ci przybli�anej liczby */
		
		while (support_variable>precision) {
			if (support_variable>current_term) {
				list.insert(index);
				support_variable = (support_variable-current_term); // r�nica mi�dzy przybli�an� liczb� a bierz�ca sum� cze�ciow�
				index++;
				current_term = quotient*current_term; //  warto�� aktualnie rozwa�anego wyrazu - 
			}
			else {
				index++;
				current_term = quotient*current_term; // zwi�kszamy pot�ge q(ilorazu) o jeden
			}
		}
		resultText += list.toString() += QString("\nSuma podszeregu wynosi: ") += QString::number(number-support_variable) += '\n';

	}
	else if (ui.lazyRadioButton->isChecked()) {
		float tail; /*!< bierz�cy ogon szeregu */
		float support_variable; /*!< zmienna pomocnicza */
		float current_term; /*!< bierz�cy wyraz szeregu */
		int index; /*!< indeks wyrazu szeregu */

		if (precision <= 0)
		{
			/*Dok�adno�� powinna by� liczba dodatnia.
			Program sprawdza czy podano liczb� dodatnia i je�li nie, pozwala wpisa� ponownie*/

			//majoryzuje czyli szacuje z gory
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0.5 && quotient>0) {
			/*Rozwa�amy szereg, kt�rego zbi�r osi�galny ma by� przedzia�em, a wi�c szereg jest wolno zbie�ny. Szereg geometryczny jest wolno zbie�ny gdy iloraz mie�ci si� w przedziale [0.5,1)*/
			resultText += QString("Twoj iloraz nie gwarantuje wolnej zbieznosci szeregu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient>=1) {
			/*Rozwa�amy szereg, kt�rego zbi�r osi�galny ma by� przedzia�em, a wi�c szereg jest wolno zbie�ny. Szereg geometryczny jest wolno zbie�ny gdy iloraz mie�ci si� w przedziale [0.5,1)*/
			resultText += QString("Szereg nie jest bezwglednie zbiezny dla zdefiniowanego ilorazu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0) {
			/*Rozwa�amy szereg, kt�rego zbi�r osi�galny ma by� przedzia�em, a wi�c szereg jest wolno zbie�ny. Szereg geometryczny jest wolno zbie�ny gdy iloraz mie�ci si� w przedziale [0.5,1)*/
			resultText += QString("Nie rozwazamy ilorazow ujemnych. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>quotient/(1.0-quotient)) {
			/*Zbi�r osi�galny jest przedzialem [0, q/(1-q)] domkni�ty obustronnie. Nale�y poda� liczb� z tego przedzia�u.*/
			resultText += QString("Twoja liczba jest za duza. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number<0) {
			/*Zbi�r osi�galny jest przedzialem [0, q/(1-q)] domkni�ty obustronnie. Nale�y poda� liczb� z tego przedzia�u.*/
			resultText += QString("Twoja liczba jest ujemna. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		//quotient - iloraz
		current_term = quotient;
		tail = pow(quotient, 2)/(1.0-quotient);
		support_variable = number;

		index = 1;
		/*!Dzia�amy na szeregu geometrycznym o wybranym ilorazie.
		Algorytm lazy dzia�a wed�ug zasady sumuj kiedy musisz. Oznacza to, �e sumujemy wyrazy szeregu dok�adnie wtedy gdy ich pomini�cie uniemo�liwi�oby uzyskanie przybli�enia wskazanej liczby.
		Wykrywamy to poprzez zbyt ma�e ogony szeregu (Sumy prawie wszystkich wyraz�w z pomini�ciem sko�czenie wielu pocz�tkowych)*/

		while (support_variable>precision) {
			if (support_variable>tail) {
				list.insert(index);
				support_variable = (support_variable-current_term);
				index++;
				tail = quotient*tail; // warto�� kolejnego ogonu 
				current_term = quotient*current_term; //  warto�� aktualnie rozwa�anego wyrazu - przechodzimy do nast�pnego wyrazu w szeregu geometrycznym
			}
			else {
				index++;
				tail = quotient*tail;
				current_term = quotient*current_term; // zwi�kszamy pot�ge q(ilorazu) o jeden - przechodzimy do nast�pnego wyrazu w szeregu geometrycznym
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
			/*Dok�adno�� powinna by� liczba dodatnia.
			Program sprawdza czy podano liczb� dodatnia i je�li nie, pozwala wpisa� ponownie*/

			//majoryzuje czyli szacuje z gory
			resultText += QString("Dokladnosc majoryzuje blad bewzgledny przyblizenia. Nalezy podac liczbe dodatnia\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient >= 1) {
			/*Szereg mo�e by� wolnozbiezny i wtedy nie ma luk i dzia�a jak greedy q nale�y [0.5, 1) ale mo�e te� nie by� wolny zbiezny q nalezy [0,0.5) i wtedy mo�emy trafi� w Luke. St�d chcemy aby q nale�a� do przedzia�u (0,1)*/
			resultText += QString("Szereg nie jest bezwglednie zbiezny dla zdefiniowanego ilorazu. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (quotient<0) {
			/*Szereg mo�e by� wolnozbiezny i wtedy nie ma luk i dzia�a jak greedy q nale�y [0.5, 1) ale mo�e te� nie by� wolny zbiezny q nalezy [0,0.5) i wtedy mo�emy trafi� w Luke. St�d chcemy aby q nale�a� do przedzia�u (0,1)*/
			resultText += QString("Nie rozwazamy ilorazow ujemnych. Podaj jeszcze raz liczbe z zakresu [0.5,1)\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number>quotient/(1.0-quotient)) {
			/*Zbi�r osi�galny mie�ci si� w przdziale [0 q/(1-q)], dlatego te� liczba powinna by� z tego przedzia�u*/
			resultText += QString("Twoja liczba jest za duza. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (number<0) {
			/*Zbi�r osi�galny mie�ci si� w przdziale [0 q/(1-q)], dlatego te� liczba powinna by� z tego przedzia�u*/
			resultText += QString("Twoja liczba jest ujemna. Podaj jeszcze raz liczbe z zakresu [0,") +=QString::number(quotient/(1.0-quotient)) += QString("]\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		
		tail = quotient/(1.0-quotient);
		current_term = quotient;
		support_variable = number;

		index = 1;
		/*!Dzia�amy na szeregu geometrycznym o wybranym ilorazie.
		Algorytm dzia�a wed�ug zasady sumuj kiedy mo�esz. Okazuje si�, �e pomini�cie wyrazu mo�e  uniemozliwi� uzyskanie przybli�enia wskazanej liczby.
		W tym przypadku  wykrywamy to poprzez zbyt ma�e ogony szeregu (Sumy prawie wszystkich wyraz�w z pomini�ciem sko�czenie wielu pocz�tkowych) i zwracany jest komunikat o lukach */
		


		while (support_variable>precision && support_variable<tail) {
			if (support_variable>current_term) {
				list.insert(index);
				support_variable = (support_variable-current_term); // przechowuje r�nice pomi�dzy zsumowanymi juz wyrazami a warto�ci� kt�r� przybli�amy
			}
			index++;
			current_term = quotient*current_term;
			tail = quotient*tail;
		}
		if (support_variable>=tail) { // Pozosta�y ogon szeregu nie wystarcza do wysumowania naszej liczby
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
	Metoda wy��cza kontrolk� z ilorazem gdy wybierzemy szereg warunkowo zbie�ny
	*/
	ui.quotientEditBox->setEnabled(!on);
}

void SubseriesWindow::on_actionConditionally_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do szeregu warunkowo zbie�nego
	*/
	subseriesHelp.show();
}

void SubseriesWindow::on_actionGreedy_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do szeregu greedy
	*/
	subseriesGreedyHelp.show();
}

void SubseriesWindow::on_actionLazy_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do szeregu lazy
	*/
	subseriesLazyHelp.show();
}

void SubseriesWindow::on_actionGaps_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do szeregu z lukami
	*/
	subseriesGapsHelp.show();
}

void SubseriesWindow::on_actionConditionallyExample_triggered() {
	/*!
	Metoda otwiera okno z przyk�adami do szeregu warunkowo zbie�nego
	*/
	subseriesExample.show();
	
}
void SubseriesWindow::on_actionGreedyExample_triggered() {
	/*!
	Metoda otwiera okno z przyk�adami do szeregu greedy
	*/
	subseriesGreedyExample.show();
}

void SubseriesWindow::on_actionLazyExample_triggered() {
	/*!
	Metoda otwiera okno z przyk�adami do szeregu lazy
	*/
	subseriesLazyExample.show();
}

void SubseriesWindow::on_actionGapsExample_triggered() {
	/*!
	Metoda otwiera okno z przyk�adami do szeregu z lukami
	*/
	subseriesGapsExample.show();
}