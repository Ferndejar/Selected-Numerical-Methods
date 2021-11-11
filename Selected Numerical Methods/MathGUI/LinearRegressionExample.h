#pragma once

#include <QWidget>
#include "ui_LinearRegressionExample.h"

/**
 * \brief Okno przyk�ad�w regresji liniowej drugiego rodzaju
 *
 * klasa odpowiedzialna za obs�uge przyk�ad�w w algorytmie regresji liniowej drugiego rodzaju
 *
 */

class LinearRegressionExample : public QWidget
{
	Q_OBJECT

public:
	LinearRegressionExample(QWidget *parent = Q_NULLPTR);
	~LinearRegressionExample();

private:
	Ui::LinearRegressionExample ui;
};
