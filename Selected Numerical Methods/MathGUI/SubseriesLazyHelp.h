#pragma once

#include <QWidget>
#include "ui_SubseriesLazyHelp.h"

/**
 * \brief Okno instrukcji podszeregów w metodzie lazy
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie podszeregi : szereg lazy
 *
 */

class SubseriesLazyHelp : public QWidget
{
	Q_OBJECT

public:
	SubseriesLazyHelp(QWidget *parent = Q_NULLPTR);
	~SubseriesLazyHelp();

private:
	Ui::SubseriesLazyHelp ui;
};
