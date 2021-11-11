#pragma once

#include <QWidget>
#include "ui_SubseriesGapsExample.h"


/**
 * \brief Okno przyk�ad�w podszereg�w w metodzie z lukami
 *
 * klasa odpowiedzialna za obs�uge przyk�ad�w w algorytmie podszeregi : szereg z lukami
 *
 */

class SubseriesGapsExample : public QWidget
{
	Q_OBJECT

public:
	SubseriesGapsExample(QWidget *parent = Q_NULLPTR);
	~SubseriesGapsExample();

private:
	Ui::SubseriesGapsExample ui;
};
