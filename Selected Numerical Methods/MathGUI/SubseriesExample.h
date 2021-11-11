#pragma once

#include <QWidget>
#include "ui_SubseriesExample.h"

/**
 * \brief Okno przyk³adów podszeregów w szeregu warunkowo zbie¿nym
 *
 * klasa odpowiedzialna za obs³uge przykladów w algorytmie podszeregi : szereg warunkowo zbie¿ny
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
