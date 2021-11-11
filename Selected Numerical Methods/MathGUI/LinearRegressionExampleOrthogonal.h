#pragma once

#include <QWidget>
#include "ui_LinearRegressionExampleOrthogonal.h"

/**
 * \brief Okno przyk�ad�w regresji liniowej ortogonalnej
 *
 * klasa odpowiedzialna za obs�uge przyk�ad�w w algorytmie regresji liniowej ortogonalej
 *
 */

class LinearRegressionExampleOrthogonal : public QWidget
{
	Q_OBJECT

public:
	LinearRegressionExampleOrthogonal(QWidget *parent = Q_NULLPTR);
	~LinearRegressionExampleOrthogonal();

private:
	Ui::LinearRegressionExampleOrthogonal ui;
};
