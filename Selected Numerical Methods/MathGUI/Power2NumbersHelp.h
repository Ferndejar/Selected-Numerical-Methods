#pragma once

#include <QWidget>
#include "ui_Power2NumbersHelp.h"

/**
 * \brief Okno instrukcji pot�g dw�jek
 *
 * klasa odpowiedzialna za obs�uge instrukcji w algorytmie pot�gi dw�jek
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
