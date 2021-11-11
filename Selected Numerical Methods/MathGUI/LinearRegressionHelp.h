#pragma once

#include <QWidget>
#include "ui_LinearRegressionHelp.h"

/**
 * \brief Okno instrukcji regresji liniowej
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie regresji liniowej
 *
 */

class LinearRegressionHelp : public QWidget
{
	Q_OBJECT

public:
	LinearRegressionHelp(QWidget *parent = Q_NULLPTR);
	~LinearRegressionHelp();

private:
	Ui::LinearRegressionHelp ui;
};
