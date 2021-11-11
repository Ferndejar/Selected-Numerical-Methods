#include "PolynomialRootsWindow.h"
#include "include\\Newton.h"
#include "input.h"



PolynomialRootsWindow::PolynomialRootsWindow(QWidget * parent):
	QMainWindow(parent)
{
	ui.setupUi(this);
}

PolynomialRootsWindow::~PolynomialRootsWindow() {
}

void PolynomialRootsWindow::resetUI() {
	/*!
	Metoda ustawia startowe parametry w kontrolkach
	*/
	ui.coefficientsEditBox->setText("0");
	ui.precisionEditBox->setText("0.001");
	ui.beginEditBox->setText("-10");
	ui.endEditBox->setText("10");
	ui.resultTextBox->setText("");
}

void PolynomialRootsWindow::on_computeButton_clicked() {
	int size; /*!< liczba wsp�czynnik�w - liczba o jeden wi�ksza od stopnia wygenerowanego wielomianu */
	float* coefficients; /*!< wsp�czynniki wielomianu */
	float begin; /*!< poczatek rozwa�anego przedzialu(metoda po�owienia), punkt startowy(metoda Newtona)*/
	float end; /*!< koniec rozwa�anego przedzia�u(metoda po�owienia) */
	float precision; /*!< dok�adno�� oblicze� */
	try {
		coefficients = textToFloatArray(ui.coefficientsEditBox->text(), size); // przypisanie warto�ci z kontrolki coefficientsEditBox(wsp�czynniki)
		begin = getFloat(ui.beginEditBox); // przypisanie warto�ci z kontrolki beginEditBox(pocz�tek przedzia�u)
		end = getFloat(ui.endEditBox); // przypisanie warto�ci z kontrolki endEditBox(koniec przedzia�u)
		precision = getFloat(ui.precisionEditBox); // przypisanie warto�ci z kontrolki precisionEditBox(dok�adno��)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	QString resultText; //obiekt klasy QString
	Bisection computer; // obiekt klasy Bisection

	if (ui.bisectionRadioButton->isChecked())
	{
		if (begin >= end)
		{
			/* Program bada czy przedzia� startowy jest prawid�owo okre�lony, to jest koniec powinien by� wi�kszy ni� pocz�tek*/
			resultText += QString("Koniec przedzialu jest mniejszy niz poczatek\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (computer.polynomial_value(coefficients, size, begin)*computer.polynomial_value(coefficients, size, end) > 0)
		{
			/*Program sprawdza czy warto�ci funkcji na obydwu ko�cach przedzia�u s� przeciwnych znak�w. Jest to warunek wystarczaj�cy na to aby funkcja ci�g�a mia�a w tym przedziale miejsce zerowe i konieczny do uruchomienia algorytmu bisekcji.*/
			resultText += QString("Wartosci funkcji na koncach przedzialu maja ten sam znak nie ma gwarancji ze istnieje miejsce zerowe. Podaj koniec i poczatek jeszcze raz\n");
			ui.resultTextBox->setText(resultText);
			return;
		}

		/*!
		Algorytm poszukuje przybli�enia miejsca zerowego wielomianu.
		Przechodzi przez kolejne iteracje w metodzie po�owienia z podanym przedzia�em startowym(begin, end) i zwraca wynik zaspokajaj�cy dokladno��(precision)
		*/
		Bisection computer;
		ui.resultTextBox->setText(QString::number(computer.bisection_Method(coefficients, size, begin, end, precision)));
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
	
    if (ui.newtonRadioButton->isChecked()) {
		Newton computer;
		/*!
		Algorytm poszukuje przybli�enia miejsca zerowego wielomianu.
		Przechodzi przez kolejne iteracje w metodzie Newtona z punktem startowym(begin) i zwraca wynik zaspokajaj�cy dokladno��(precision)
		*/
		ui.resultTextBox->setText(QString::number(computer.newton_Method(coefficients, size, begin, precision)));
	}
	delete[] coefficients; //zwalnianie pami�ci
}

void PolynomialRootsWindow::on_newtonRadioButton_toggled(bool on) {
	/*!
	Metoda wy��cza kontrolki zwi�zane z ko�cem przedzia�u gdy wybierzemy metod� Newtona
	*/
	ui.endEditBox->setEnabled(!on);
	ui.endLabel->setEnabled(!on);
}

void PolynomialRootsWindow::on_actionInstrukcja_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do miejsc zerowych wielomian�w
	*/
	polymonialRootsWindow.show();
}

void PolynomialRootsWindow::on_actionBisection_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do miejsc zerowych wielomian�w obliczanej metod� po�owienia
	*/
	polymonialRootsExample.show();
	
}
void PolynomialRootsWindow::on_actionNewton_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do miejsc zerowych wielomian�w obliczanej metod� Newtona
	*/
	polymonialRootsExampleNewton.show();
}
