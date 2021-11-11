#pragma once

#include <QWidget>
#include "ui_SubseriesGreedyHelp.h"

/**
 * \brief Okno instrukcji podszereg�w w metodzie greedy
 *
 * klasa odpowiedzialna za obs�uge instrukcji w algorytmie podszeregi : szereg greedy
 *
 */

class SubseriesGreedyHelp : public QWidget
{
	Q_OBJECT

public:
	SubseriesGreedyHelp(QWidget *parent = Q_NULLPTR);
	~SubseriesGreedyHelp();

private:
	Ui::SubseriesGreedyHelp ui;
};
