#pragma once

#include <QWidget>
#include "ui_Power2NumbersHelp.h"

/**
 * \brief Okno instrukcji potêg dwójek
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie potêgi dwójek
 *
 */

class Power2NumbersHelp : public QWidget
{
	Q_OBJECT

public:
	Power2NumbersHelp(QWidget *parent = Q_NULLPTR);
	~Power2NumbersHelp();

private:
	Ui::Power2NumbersHelp ui;
};
