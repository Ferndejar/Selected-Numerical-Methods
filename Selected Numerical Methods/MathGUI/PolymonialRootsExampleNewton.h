#pragma once

#include <QWidget>
#include "ui_PolymonialRootsExampleNewton.h"

/**
 * \brief Okno przyk³adów miejsc zerowych wielomianów w metodzie Newtona
 *
 * klasa odpowiedzialna za obs³uge przyk³adów w algorytmie miejsc zerowych wielomanu w metodzie Newtona
 *
 */	

class PolymonialRootsExampleNewton : public QWidget
{
	Q_OBJECT

public:
	PolymonialRootsExampleNewton(QWidget *parent = Q_NULLPTR);
	~PolymonialRootsExampleNewton();

private:
	Ui::PolymonialRootsExampleNewton ui;
};
