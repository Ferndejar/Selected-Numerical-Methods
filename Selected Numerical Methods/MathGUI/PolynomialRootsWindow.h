#pragma once
#include <qmainwindow.h>
#include "ui_PolynomialRootsWindow.h"
#include "PolymonialRootsHelp.h"
#include "PolymonialRootsExample.h"
#include "PolymonialRootsExampleNewton.h"


/**
 * \brief Okno Miejsc zerowych wielomianów
 *
 * klasa odpowiedzialna za operacje na okienku miejsca zerowego wielomianu
 *
 */

class PolynomialRootsWindow: public QMainWindow
{
	Q_OBJECT;
	Ui::PolynomialRoots ui;

public:
	PolynomialRootsWindow(QWidget* parent = nullptr);
	~PolynomialRootsWindow();
	void resetUI();
	PolymonialRootsHelp polymonialRootsWindow;
	PolymonialRootsExample polymonialRootsExample;
	PolymonialRootsExampleNewton polymonialRootsExampleNewton;

public slots:
	void on_newtonRadioButton_toggled(bool on);
	void on_computeButton_clicked();
	void on_actionInstrukcja_triggered();
	void on_actionBisection_triggered();
	void on_actionNewton_triggered();


};

