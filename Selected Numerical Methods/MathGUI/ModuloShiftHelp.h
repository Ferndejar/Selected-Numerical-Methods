#pragma once

#include <QWidget>
#include "ui_ModuloShiftHelp.h"

/**
 * \brief Okno instrukcji przesuniêæ modulo
 *
 * klasa odpowiedzialna za obs³uge instrukcji w algorytmie przesuniêæ modulo
 *
 */

class ModuloShiftHelp : public QWidget
{
	Q_OBJECT

public:
	ModuloShiftHelp(QWidget *parent = Q_NULLPTR);
	~ModuloShiftHelp();

private:
	Ui::ModuloShiftHelp ui;
};
