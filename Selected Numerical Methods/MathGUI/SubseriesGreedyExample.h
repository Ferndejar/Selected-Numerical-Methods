#pragma once

#include <QWidget>
#include "ui_SubseriesGreedyExample.h"


/**
 * \brief Okno przyklad�w podszereg�w w metodzie greedy
 *
 * klasa odpowiedzialna za obs�uge przyklad�w w algorytmie podszeregi : szereg greedy
 *
 */

class SubseriesGreedyExample : public QWidget
{
	Q_OBJECT

public:
	SubseriesGreedyExample(QWidget *parent = Q_NULLPTR);
	~SubseriesGreedyExample();

private:
	Ui::SubseriesGreedyExample ui;
};
