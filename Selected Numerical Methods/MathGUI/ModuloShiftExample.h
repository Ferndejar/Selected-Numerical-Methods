#pragma once

#include <QWidget>
#include "ui_ModuloShiftExample.h"

/**
 * \brief Okno przyk�ad�w przesuni�� modulo
 *
 * klasa odpowiedzialna za obs�uge przyk�ad�w w algorytmie przesuni�� modulo
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
