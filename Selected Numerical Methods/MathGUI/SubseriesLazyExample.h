#pragma once

#include <QWidget>
#include "ui_SubseriesLazyExample.h"


/**
 * \brief Okno przykładów podszeregów w metodzie lazy
 *
 * klasa odpowiedzialna za obsługe przykladów w algorytmie podszeregi : szereg lazy
 *
 */

class SubseriesLazyExample : public QWidget
{
	Q_OBJECT

public:
	SubseriesLazyExample(QWidget *parent = Q_NULLPTR);
	~SubseriesLazyExample();

private:
	Ui::SubseriesLazyExample ui;
};
