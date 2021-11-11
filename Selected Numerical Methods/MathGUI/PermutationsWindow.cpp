#include "PermutationsWindow.h"
#include "include\\lista.h"
#include "input.h"


PermutationsWindow::PermutationsWindow(QWidget * parent):
	QMainWindow(parent) {
	ui.setupUi(this);
}

PermutationsWindow::~PermutationsWindow() {
}

void PermutationsWindow::resetUI() {
	/*!
	Metoda ustawia startowe parametry w kontrolkach.
	*/
	ui.nelemEditBox->setText("1");
	ui.resultTextBox->setText("");
}

void PermutationsWindow::on_computeButton_clicked() {
	float number; /*!< liczba dla której znajdujemy permutacje */
	float precision; /*!< zadana dokladnoœæ */
	float support_variable; /*!< zmienna pomocnicza */
	int even_index; /*!< obs³uguje wyrazy parzyste szeregu */
	int odd_index; /*< obs³uguje wyrazy nieparzyste szeregu */
 	int first_values_of_permutation; /*!< liczba pierwszych wyrazów szeregu która ma byæ wykorzystana */
	
	try {
		number = getFloat(ui.numberEditBox);  // przypisanie wartoœci z kontrolki numberEditBox(liczba)
		precision = getFloat(ui.precisionEditBox); //przypisanie wartoœci z kontrolki precisionEditBox(dok³adnoœæ)
		first_values_of_permutation = getFloat(ui.nelemEditBox); // przypisanie wartoœci z kontrolki nelemEditBox(liczba pierwszych wyrazów)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	support_variable = number;
	even_index = 2;
	odd_index = 1;
	lista list; 
	QString resultText; 
	if (first_values_of_permutation <= 0)
	{
		/*Liczba pierwszych wartoœci naturalnych jakie chcemy aby znalaz³y siê w wartoœciach permutacji, powinna byæ to liczba naturalna*/
		resultText += QString("Liczba pierwszych wyrazow musi byc dodatnia \n");
		ui.resultTextBox->setText(resultText);
		return;
	}

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
	Algorytm okreœla kolejne wartoœci permutacji na podstawie tego czy zdefiniowana suma czêœciowa przybli¿a z nadmiarem czy nie domiarem wskazan¹ liczbe. Ten niedomiar albo nadmiar przechowuje support_variable.
	Ponadto wyklucza zu¿yte ju¿ wartoœci gwarantuj¹c ró¿nowartoœciowoœæ permutacji.
	Po zu¿yciu indeksu przechodzimy na nastêpne indeksy osobno zliczaj¹c parzyste i nie parzyste (wyrazy dodatnie i ujemne).
	Ze wzgledu na to ¿e wartoœci s¹ wybierane od najmniejszych zarówno dla parzystych 
	i nieparzystych oraz przechodzimy na s¹siednie mamy zagwarantowan¹ surkietywnosc(wszystkie liczby naturalne bêd¹ wykorzystane jako wartoœci permutacji)
	*/
	
	while (abs(support_variable)>precision && (even_index<=first_values_of_permutation || odd_index<=first_values_of_permutation)) {
		if (support_variable>=0) {
			support_variable = support_variable-1/((float)(even_index));
			list.insert(even_index);
			even_index = even_index+2;
		}
		else {
			support_variable = support_variable+1/((float)(odd_index));
			list.insert(odd_index);
			odd_index = odd_index+2;
		}
	}
	resultText += list.toString();
	resultText += '\n';

	resultText += QString("Suma podszeregu wynosi: ") += QString::number(number-support_variable) += '\n';
	if (abs(support_variable)<=precision)
		resultText += QString("Zwrocony wynik zaspokoja zadana dokladnosc\n");
	else 
		resultText += QString("Podany wynik wykorzystuje wymagana liczbe wyrazow\n");

	ui.resultTextBox->setText(resultText);
}
void  PermutationsWindow::on_actionInstrukcja_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do permutacji
	*/
	permutationHelp.show();
}
void  PermutationsWindow::on_actionPrzyklad_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do permutacji
	*/
	permutationExample.show();
}
