#pragma once

#include <qmainwindow.h>
#include <QWidget>
#include "ui_SubseriesHelp.h"


/**
 * \brief Okno instrukcji podszereg�w w szeregu warunkowo zbie�nym
 *
 * klasa odpowiedzialna za obs�uge instrukcji w algorytmie podszeregi : szereg warunkowo zbie�ny
 *
 */

class SubseriesHelp : public QWidget
{
	Q_OBJECT

public:
	SubseriesHelp(QWidget *parent = Q_NULLPTR);
	~SubseriesHelp();

private:
	Ui::SubseriesHelp ui;
};
