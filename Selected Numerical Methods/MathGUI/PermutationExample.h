#pragma once

#include <QWidget>
#include "ui_PermutationExample.h"

/**
 * \brief Okno przyk³adów permutacji
 *
 * klasa odpowiedzialna za obsluge przyk³adów w algorytmie permutacje
 *
 */

class PermutationExample : public QWidget
{
	Q_OBJECT

public:
	PermutationExample(QWidget *parent = Q_NULLPTR);
	~PermutationExample();

private:
	Ui::PermutationExample ui;
};
