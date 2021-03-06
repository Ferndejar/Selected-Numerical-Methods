#pragma once

#include <QWidget>
#include "ui_SubseriesGreedyExample.h"


/**
 * \brief Okno przykladów podszeregów w metodzie greedy
 *
 * klasa odpowiedzialna za obsługe przykladów w algorytmie podszeregi : szereg greedy
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
