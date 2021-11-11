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
	int size; /*!< liczba wspó³czynników - liczba o jeden wiêksza od stopnia wygenerowanego wielomianu */
	float* coefficients; /*!< wspó³czynniki wielomianu */
	float begin; /*!< poczatek rozwa¿anego przedzialu(metoda po³owienia), punkt startowy(metoda Newtona)*/
	float end; /*!< koniec rozwa¿anego przedzia³u(metoda po³owienia) */
	float precision; /*!< dok³adnoœæ obliczeñ */
	try {
		coefficients = textToFloatArray(ui.coefficientsEditBox->text(), size); // przypisanie wartoœci z kontrolki coefficientsEditBox(wspó³czynniki)
		begin = getFloat(ui.beginEditBox); // przypisanie wartoœci z kontrolki beginEditBox(pocz¹tek przedzia³u)
		end = getFloat(ui.endEditBox); // przypisanie wartoœci z kontrolki endEditBox(koniec przedzia³u)
		precision = getFloat(ui.precisionEditBox); // przypisanie wartoœci z kontrolki precisionEditBox(dok³adnoœæ)
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
			/* Program bada czy przedzia³ startowy jest prawid³owo okreœlony, to jest koniec powinien byæ wiêkszy ni¿ pocz¹tek*/
			resultText += QString("Koniec przedzialu jest mniejszy niz poczatek\n");
			ui.resultTextBox->setText(resultText);
			return;
		}
		if (computer.polynomial_value(coefficients, size, begin)*computer.polynomial_value(coefficients, size, end) > 0)
		{
			/*Program sprawdza czy wartoœci funkcji na obydwu koñcach przedzia³u s¹ przeciwnych znaków. Jest to warunek wystarczaj¹cy na to aby funkcja ci¹g³a mia³a w tym przedziale miejsce zerowe i konieczny do uruchomienia algorytmu bisekcji.*/
			resultText += QString("Wartosci funkcji na koncach przedzialu maja ten sam znak nie ma gwarancji ze istnieje miejsce zerowe. Podaj koniec i poczatek jeszcze raz\n");
			ui.resultTextBox->setText(resultText);
			return;
		}

		/*!
		Algorytm poszukuje przybli¿enia miejsca zerowego wielomianu.
		Przechodzi przez kolejne iteracje w metodzie po³owienia z podanym przedzia³em startowym(begin, end) i zwraca wynik zaspokajaj¹cy dokladnoœæ(precision)
		*/
		Bisection computer;
		ui.resultTextBox->setText(QString::number(computer.bisection_Method(coefficients, size, begin, end, precision)));
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
	
    if (ui.newtonRadioButton->isChecked()) {
		Newton computer;
		/*!
		Algorytm poszukuje przybli¿enia miejsca zerowego wielomianu.
		Przechodzi przez kolejne iteracje w metodzie Newtona z punktem startowym(begin) i zwraca wynik zaspokajaj¹cy dokladnoœæ(precision)
		*/
		ui.resultTextBox->setText(QString::number(computer.newton_Method(coefficients, size, begin, precision)));
	}
	delete[] coefficients; //zwalnianie pamiêci
}

void PolynomialRootsWindow::on_newtonRadioButton_toggled(bool on) {
	/*!
	Metoda wy³¹cza kontrolki zwi¹zane z koñcem przedzia³u gdy wybierzemy metodê Newtona
	*/
	ui.endEditBox->setEnabled(!on);
	ui.endLabel->setEnabled(!on);
}

void PolynomialRootsWindow::on_actionInstrukcja_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do miejsc zerowych wielomianów
	*/
	polymonialRootsWindow.show();
}

void PolynomialRootsWindow::on_actionBisection_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do miejsc zerowych wielomianów obliczanej metod¹ po³owienia
	*/
	polymonialRootsExample.show();
	
}
void PolynomialRootsWindow::on_actionNewton_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do miejsc zerowych wielomianów obliczanej metod¹ Newtona
	*/
	polymonialRootsExampleNewton.show();
}
