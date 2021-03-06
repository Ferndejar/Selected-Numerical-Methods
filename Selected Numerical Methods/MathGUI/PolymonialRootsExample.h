#pragma once

#include <QWidget>
#include "ui_PolymonialRootsExample.h"

/**
 * \brief Okno przykładów miejsc zerowych wielomianów w metodzie połowienia
 *
 * klasa odpowiedzialna za obsluge przykładów w algorytmie miejsc zerowych wielomanu w metodzie połowienia
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
