#pragma once

#include <QWidget>
#include "ui_PolymonialRootsExample.h"

/**
 * \brief Okno przyk³adów miejsc zerowych wielomianów w metodzie po³owienia
 *
 * klasa odpowiedzialna za obsluge przyk³adów w algorytmie miejsc zerowych wielomanu w metodzie po³owienia
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
