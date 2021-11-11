#pragma once

#include <QWidget>
#include "ui_SubseriesGapsHelp.h"


/**
 * \brief Okno instrukcji podszeregów w metodzie z lukami
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie podszeregi : szereg z lukami
 *
 */

class SubseriesGapsHelp : public QWidget
{
	Q_OBJECT

public:
	SubseriesGapsHelp(QWidget *parent = Q_NULLPTR);
	~SubseriesGapsHelp();

private:
	Ui::SubseriesGapsHelp ui;
};
