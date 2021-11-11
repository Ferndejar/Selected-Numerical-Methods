#pragma once

#include <QWidget>
#include "ui_PolymonialRootsHelp.h"

/**
 * \brief Okno instrukcji miejsc zerowych wielomianów 
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie miejsc zerowych wielomanu
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
