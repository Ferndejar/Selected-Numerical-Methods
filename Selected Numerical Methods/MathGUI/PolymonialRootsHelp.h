#pragma once

#include <QWidget>
#include "ui_PolymonialRootsHelp.h"

/**
 * \brief Okno instrukcji miejsc zerowych wielomian�w 
 *
 * klasa odpowiedzialna za obs�uge instrukcji w algorytmie miejsc zerowych wielomanu
 *
 */

class PolymonialRootsHelp : public QWidget
{
	Q_OBJECT

public:
	PolymonialRootsHelp(QWidget *parent = Q_NULLPTR);
	~PolymonialRootsHelp();

private:
	Ui::PolymonialRootsHelp ui;
};
