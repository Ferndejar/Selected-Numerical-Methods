#include "MathGUI.h"

MathGUI::MathGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void MathGUI::on_polynomialRootsButton_clicked() {
	/*!
	Metoda sprawia, �e gdy naci�niemy przycisk "Miejsca zerowe wielomianu" to wywo�ujemy okienko dotycz�ce danego algorytmu
	oraz s� ustawiane parametry startowe kontrolek
	*/
	polynomialRootsWindow.resetUI();
	polynomialRootsWindow.show();
}

void MathGUI::on_linearRegressionButton_clicked() {
	/*!
	Metoda sprawia, �e gdy naci�niemy przycisk "Regresja liniowa" to wywo�ujemy okienko dotycz�ce danego algorytmu
	oraz s� ustawiane parametry startowe kontrolek	*/
	linearRegressionWindow.resetUI();
	linearRegressionWindow.show();
}

void MathGUI::on_pow2NumbersButton_clicked() {
	/*!
	Metoda sprawia, �e gdy naci�niemy przycisk "Pierwsze liczby pot�gi dw�jek" to wywo�ujemy okienko dotycz�ce danego algorytmu
	oraz s� ustawiane parametry startowe kontrolek
	*/
	power2NumbersWindow.resetUI();
	power2NumbersWindow.show();
}

void MathGUI::on_moduloShiftButton_clicked() {
	/*!
	Metoda sprawia, �e gdy naci�niemy przycisk "Przesuni�cie modulo" to wywo�ujemy okienko dotycz�ce danego algorytmu
	oraz s� ustawiane parametry startowe kontrolek
	*/
	moduloShiftWindow.resetUI();
	moduloShiftWindow.show();
}

void MathGUI::on_permutationsButton_clicked() {
	/*!
	Metoda sprawia, �e gdy naci�niemy przycisk "Permutacje" to wywo�ujemy okienko dotycz�ce danego algorytmu
	oraz s� ustawiane parametry startowe kontrolek
	*/
	permutationsWindow.resetUI();
	permutationsWindow.show();
}

void MathGUI::on_subseriesButton_clicked() {
	/*!
	Metoda sprawia, �e gdy naci�niemy przycisk "Podszeregi" to wywo�ujemy okienko dotycz�ce danego algorytmu
	oraz s� ustawiane parametry startowe kontrolek
	*/
	subseriesWindow.resetUI();
	subseriesWindow.show();
}
