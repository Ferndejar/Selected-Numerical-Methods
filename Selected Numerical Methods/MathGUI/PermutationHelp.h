#pragma once

#include <QWidget>
#include "ui_PermutationHelp.h"

/**
 * \brief Okno instrukcji permutacji
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie permutacje
 *
 */

class PermutationHelp : public QWidget
{
	Q_OBJECT

public:
	PermutationHelp(QWidget *parent = Q_NULLPTR);
	~PermutationHelp();

private:
	Ui::PermutationHelp ui;
};
