#pragma once

#include <QWidget>
#include "ui_SubseriesExample.h"

/**
 * \brief Okno przyk�ad�w podszereg�w w szeregu warunkowo zbie�nym
 *
 * klasa odpowiedzialna za obs�uge przyklad�w w algorytmie podszeregi : szereg warunkowo zbie�ny
 *
 */

class SubseriesExample : public QWidget
{
	Q_OBJECT

public:
	SubseriesExample(QWidget *parent = Q_NULLPTR);
	~SubseriesExample();

private:
	Ui::SubseriesExample ui;
};
