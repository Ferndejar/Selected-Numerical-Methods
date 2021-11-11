#pragma once

#include <QWidget>
#include "ui_SubseriesLazyExample.h"


/**
 * \brief Okno przyk�ad�w podszereg�w w metodzie lazy
 *
 * klasa odpowiedzialna za obs�uge przyklad�w w algorytmie podszeregi : szereg lazy
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
