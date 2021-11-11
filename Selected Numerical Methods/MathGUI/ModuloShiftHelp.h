#pragma once

#include <QWidget>
#include "ui_ModuloShiftHelp.h"

/**
 * \brief Okno instrukcji przesuni�� modulo
 *
 * klasa odpowiedzialna za obs�uge instrukcji w algorytmie przesuni�� modulo
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
