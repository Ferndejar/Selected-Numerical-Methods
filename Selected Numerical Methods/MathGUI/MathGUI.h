#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MathGUI.h"
#include "PolynomialRootsWindow.h"
#include "LinearRegressionWindow.h"
#include "Power2NumbersWindow.h"
#include "ModuloShiftWindow.h"
#include "PermutationsWindow.h"
#include "SubseriesWindow.h"

/**
 * \brief G³ówne okienko
 *
 * klasa odpowiedzialna za operacje na g³ównym okienku
 *
 */
class MathGUI : public QMainWindow
{
	Q_OBJECT

public:
	MathGUI(QWidget *parent = Q_NULLPTR);
	PolynomialRootsWindow polynomialRootsWindow;
	LinearRegressionWindow linearRegressionWindow;
	Power2NumbersWindow power2NumbersWindow;
	ModuloShiftWindow moduloShiftWindow;
	PermutationsWindow permutationsWindow;
	SubseriesWindow subseriesWindow;

private:
	Ui::MathGUIClass ui;

public slots:
	void on_polynomialRootsButton_clicked();
	void on_linearRegressionButton_clicked();
	void on_pow2NumbersButton_clicked();
	void on_moduloShiftButton_clicked();
	void on_permutationsButton_clicked();
	void on_subseriesButton_clicked();
};
