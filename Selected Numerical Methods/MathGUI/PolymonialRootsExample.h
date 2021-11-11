#pragma once

#include <QWidget>
#include "ui_PolymonialRootsExample.h"

/**
 * \brief Okno przyk�ad�w miejsc zerowych wielomian�w w metodzie po�owienia
 *
 * klasa odpowiedzialna za obsluge przyk�ad�w w algorytmie miejsc zerowych wielomanu w metodzie po�owienia
 *
 */

class PolymonialRootsExample : public QWidget
{
	Q_OBJECT

public:
	PolymonialRootsExample(QWidget *parent = Q_NULLPTR);
	~PolymonialRootsExample();

private:
	Ui::PolymonialRootsExample ui;
};
