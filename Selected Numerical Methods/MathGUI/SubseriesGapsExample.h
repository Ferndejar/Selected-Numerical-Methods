#pragma once

#include <QWidget>
#include "ui_SubseriesGapsExample.h"


/**
 * \brief Okno przykładów podszeregów w metodzie z lukami
 *
 * klasa odpowiedzialna za obsługe przykładów w algorytmie podszeregi : szereg z lukami
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
