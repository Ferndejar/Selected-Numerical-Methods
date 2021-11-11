#pragma once

#include <QWidget>
#include "ui_LinearRegressionExample.h"

/**
 * \brief Okno przyk³adów regresji liniowej drugiego rodzaju
 *
 * klasa odpowiedzialna za obs³uge przyk³adów w algorytmie regresji liniowej drugiego rodzaju
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
