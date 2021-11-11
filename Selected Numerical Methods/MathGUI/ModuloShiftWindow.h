#pragma once

#include <qmainwindow.h>
#include "ui_ModuloShiftWindow.h"
#include "ModuloShiftHelp.h"
#include "ModuloShiftExample.h"

/**
 * \brief Okno przesuniêæ modulo
 *
 * klasa odpowiedzialna za operacje na okienku przesuniêæ modulo
 *
 */

class ModuloShiftWindow: public QMainWindow
{
	Q_OBJECT;
	Ui::ModuloShiftWindow ui;
public:
	ModuloShiftWindow(QWidget* parent = nullptr);
	~ModuloShiftWindow();
	void resetUI();
	ModuloShiftHelp moduloShiftHelp;
	ModuloShiftExample moduloShiftExample;
public slots:
	void on_computeButton_clicked();
	void on_sqrtRadioButton_toggled(bool on);
	void on_piRadioButton_toggled(bool on);
	void on_eRadioButton_toggled(bool on);
	void on_actionInstrukcja_triggered();
	void on_actionPrzyklad_triggered();

};

