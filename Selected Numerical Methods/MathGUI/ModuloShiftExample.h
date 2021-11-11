#pragma once

#include <QWidget>
#include "ui_ModuloShiftExample.h"

/**
 * \brief Okno przyk³adów przesuniêæ modulo
 *
 * klasa odpowiedzialna za obs³uge przyk³adów w algorytmie przesuniêæ modulo
 *
 */

class ModuloShiftExample : public QWidget
{
	Q_OBJECT

public:
	ModuloShiftExample(QWidget *parent = Q_NULLPTR);
	~ModuloShiftExample();

private:
	Ui::ModuloShiftExample ui;
};
