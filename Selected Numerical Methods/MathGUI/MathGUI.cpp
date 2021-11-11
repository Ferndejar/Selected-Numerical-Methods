#include "MathGUI.h"

MathGUI::MathGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void MathGUI::on_polynomialRootsButton_clicked() {
	/*!
	Metoda sprawia, ¿e gdy naciœniemy przycisk "Miejsca zerowe wielomianu" to wywo³ujemy okienko dotycz¹ce danego algorytmu
	oraz s¹ ustawiane parametry startowe kontrolek
	*/
	polynomialRootsWindow.resetUI();
	polynomialRootsWindow.show();
}

void MathGUI::on_linearRegressionButton_clicked() {
	/*!
	Metoda sprawia, ¿e gdy naciœniemy przycisk "Regresja liniowa" to wywo³ujemy okienko dotycz¹ce danego algorytmu
	oraz s¹ ustawiane parametry startowe kontrolek	*/
	linearRegressionWindow.resetUI();
	linearRegressionWindow.show();
}

void MathGUI::on_pow2NumbersButton_clicked() {
	/*!
	Metoda sprawia, ¿e gdy naciœniemy przycisk "Pierwsze liczby potêgi dwójek" to wywo³ujemy okienko dotycz¹ce danego algorytmu
	oraz s¹ ustawiane parametry startowe kontrolek
	*/
	power2NumbersWindow.resetUI();
	power2NumbersWindow.show();
}

void MathGUI::on_moduloShiftButton_clicked() {
	/*!
	Metoda sprawia, ¿e gdy naciœniemy przycisk "Przesuniêcie modulo" to wywo³ujemy okienko dotycz¹ce danego algorytmu
	oraz s¹ ustawiane parametry startowe kontrolek
	*/
	moduloShiftWindow.resetUI();
	moduloShiftWindow.show();
}

void MathGUI::on_permutationsButton_clicked() {
	/*!
	Metoda sprawia, ¿e gdy naciœniemy przycisk "Permutacje" to wywo³ujemy okienko dotycz¹ce danego algorytmu
	oraz s¹ ustawiane parametry startowe kontrolek
	*/
	permutationsWindow.resetUI();
	permutationsWindow.show();
}

void MathGUI::on_subseriesButton_clicked() {
	/*!
	Metoda sprawia, ¿e gdy naciœniemy przycisk "Podszeregi" to wywo³ujemy okienko dotycz¹ce danego algorytmu
	oraz s¹ ustawiane parametry startowe kontrolek
	*/
	subseriesWindow.resetUI();
	subseriesWindow.show();
}
