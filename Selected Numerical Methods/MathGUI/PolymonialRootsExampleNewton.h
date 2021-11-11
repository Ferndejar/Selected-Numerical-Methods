#pragma once

#include <QWidget>
#include "ui_PolymonialRootsExampleNewton.h"

/**
 * \brief Okno przyk�ad�w miejsc zerowych wielomian�w w metodzie Newtona
 *
 * klasa odpowiedzialna za obs�uge przyk�ad�w w algorytmie miejsc zerowych wielomanu w metodzie Newtona
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
