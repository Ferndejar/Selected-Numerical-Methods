#pragma once

#include <QWidget>
#include "ui_PermutationExample.h"

/**
 * \brief Okno przyk�ad�w permutacji
 *
 * klasa odpowiedzialna za obsluge przyk�ad�w w algorytmie permutacje
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
