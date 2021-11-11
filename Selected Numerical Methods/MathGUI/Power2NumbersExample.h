#pragma once

#include <QWidget>
#include "ui_Power2NumbersExample.h"

/**
 * \brief Okno przyk�ad�w pot�g dw�jek
 *
 * klasa odpowiedzialna za obs�uge przyk�ad�w w algorytmie pot�gi dw�jek
 *
 */	

class Power2NumbersExample : public QWidget
{
	Q_OBJECT

public:
	Power2NumbersExample(QWidget *parent = Q_NULLPTR);
	~Power2NumbersExample();

private:
	Ui::Power2NumbersExample ui;
};
