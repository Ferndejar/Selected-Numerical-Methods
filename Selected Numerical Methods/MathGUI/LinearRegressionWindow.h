#pragma once

#include <qmainwindow.h>
#include "ui_LinearRegressionWindow.h"
#include "LinearRegressionHelp.h"
#include "LinearRegressionExample.h"
#include "LinearRegressionExampleOrthogonal.h"


/**
 * \brief Okno Regresji liniowej
 *
 * klasa odpowiedzialna za operacje na okienku algorytmu regresji liniowej
 *
 */

class LinearRegressionWindow: public QMainWindow
{
	Q_OBJECT;
	Ui::LinearRegression ui;

	
public:
	LinearRegressionWindow(QWidget* parent = nullptr);
	~LinearRegressionWindow();
	void resetUI();
	LinearRegressionHelp linearRegressionHelp;
	LinearRegressionExample linearRegressionExample;
	LinearRegressionExampleOrthogonal linearRegressionExampleOrthogonal;

public slots:
	void on_computeButton_clicked();
	void on_actionInstrukcja_triggered();
	void on_actionSecond_Moment_triggered();
	void on_actionOrthogonal_triggered();

};

