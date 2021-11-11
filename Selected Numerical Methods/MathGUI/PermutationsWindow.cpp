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
	float number; /*!< liczba dla kt�rej znajdujemy permutacje */
	float precision; /*!< zadana dokladno�� */
	float support_variable; /*!< zmienna pomocnicza */
	int even_index; /*!< obs�uguje wyrazy parzyste szeregu */
	int odd_index; /*< obs�uguje wyrazy nieparzyste szeregu */
 	int first_values_of_permutation; /*!< liczba pierwszych wyraz�w szeregu kt�ra ma by� wykorzystana */
	
	try {
		number = getFloat(ui.numberEditBox);  // przypisanie warto�ci z kontrolki numberEditBox(liczba)
		precision = getFloat(ui.precisionEditBox); //przypisanie warto�ci z kontrolki precisionEditBox(dok�adno��)
		first_values_of_permutation = getFloat(ui.nelemEditBox); // przypisanie warto�ci z kontrolki nelemEditBox(liczba pierwszych wyraz�w)
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
		/*Liczba pierwszych warto�ci naturalnych jakie chcemy aby znalaz�y si� w warto�ciach permutacji, powinna by� to liczba naturalna*/
		resultText += QString("Liczba pierwszych wyrazow musi byc dodatnia \n");
		ui.resultTextBox->setText(resultText);
		return;
	}

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
	Algorytm okre�la kolejne warto�ci permutacji na podstawie tego czy zdefiniowana suma cz�ciowa przybli�a z nadmiarem czy nie domiarem wskazan� liczbe. Ten niedomiar albo nadmiar przechowuje support_variable.
	Ponadto wyklucza zu�yte ju� warto�ci gwarantuj�c r�nowarto�ciowo�� permutacji.
	Po zu�yciu indeksu przechodzimy na nast�pne indeksy osobno zliczaj�c parzyste i nie parzyste (wyrazy dodatnie i ujemne).
	Ze wzgledu na to �e warto�ci s� wybierane od najmniejszych zar�wno dla parzystych 
	i nieparzystych oraz przechodzimy na s�siednie mamy zagwarantowan� surkietywnosc(wszystkie liczby naturalne b�d� wykorzystane jako warto�ci permutacji)
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
	Metoda otwiera okno z instrukcj� do permutacji
	*/
	permutationHelp.show();
}
void  PermutationsWindow::on_actionPrzyklad_triggered() {
	/*!
	Metoda otwiera okno z przyk�adami do permutacji
	*/
	permutationExample.show();
}
