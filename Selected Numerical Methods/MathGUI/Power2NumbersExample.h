#pragma once

#include <QWidget>
#include "ui_Power2NumbersExample.h"

/**
 * \brief Okno przyk³adów potêg dwójek
 *
 * klasa odpowiedzialna za obs³uge przyk³adów w algorytmie potêgi dwójek
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
