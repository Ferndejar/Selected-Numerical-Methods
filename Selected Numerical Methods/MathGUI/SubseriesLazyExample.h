#pragma once

#include <QWidget>
#include "ui_SubseriesLazyExample.h"


/**
 * \brief Okno przyk³adów podszeregów w metodzie lazy
 *
 * klasa odpowiedzialna za obs³uge przykladów w algorytmie podszeregi : szereg lazy
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
