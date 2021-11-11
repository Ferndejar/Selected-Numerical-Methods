#include "LinearRegressionWindow.h"
#include "include\\LinearRegression.h"
#include "input.h"


LinearRegressionWindow::LinearRegressionWindow(QWidget* parent):
	QMainWindow(parent)
{
	ui.setupUi(this);
}


LinearRegressionWindow::~LinearRegressionWindow() {
}

void LinearRegressionWindow::resetUI() {
	/*!
	Metoda ustawia startowe parametry w kontrolkach
	*/
	ui.coordinatesEditBox->setText("0 0");
	ui.resultTextBox->setText("");
}

void LinearRegressionWindow::on_computeButton_clicked() {
	
	int size; /*!< liczba wprowadzonych par */
	float* xs; /*!< pierwsze wspó³rzêdne wprowadzonych punktow plaszczyzny */
	float* ys; /*!< drugie wspó³rzêdne wprowadzonych punktow plaszczyzny */
	try {
		textToCoordinatesArrays(ui.coordinatesEditBox->text(), xs, ys, size);
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	//if (size == 0 || xs == nullptr || ys == nullptr)
		//return;
	LinearRegression computer; // obiekt klasy LinearRegression
	if (ui.secondTypeRadioButton->isChecked()) {
		/*!
		Algorytm wyznacza równanie prostej regresji liniowej drugiego rodzaju w postaci kierunkowej.
		*/
		ui.resultTextBox->setText(QString::number(computer.slope(xs, size, ys, size)) + "x + " + /*!< wspolczynnik kierunkowy */
								  QString::number(computer.intercept(xs, size, ys, size)));  /*!< wyraz wolny */
	}
	else if (ui.orthogonalRadioButton->isChecked()){
		/*!
		 Algorytm wyznacza równanie prostej regresji liniowej ortogonalnej w postaci kierunkowej.
		*/
		ui.resultTextBox->setText(QString::number(computer.orthogonal_Slope(xs, size, ys, size)) + "x + " + /*!< wspolczynnik kierunkowy */
								  QString::number(computer.orthogonal_Intercept(xs, size, ys, size)));    /*!< wyraz wolny */
	}
	delete[] xs; //zwalnianie pamiêci
	delete[] ys;
}
void LinearRegressionWindow::on_actionInstrukcja_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do regresji liniowej
	*/
	linearRegressionHelp.show();
}
void LinearRegressionWindow::on_actionSecond_Moment_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do regresji liniowej obliczanej metod¹ drugiego rodzaju
	*/
	linearRegressionExample.show();
}
void LinearRegressionWindow::on_actionOrthogonal_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do regresji liniowej obliczanej metod¹ ortogonaln¹
	*/
	linearRegressionExampleOrthogonal.show();
}

