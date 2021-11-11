#pragma once

#include <QWidget>
#include "ui_LinearRegressionExampleOrthogonal.h"

/**
 * \brief Okno przyk³adów regresji liniowej ortogonalnej
 *
 * klasa odpowiedzialna za obs³uge przyk³adów w algorytmie regresji liniowej ortogonalej
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
