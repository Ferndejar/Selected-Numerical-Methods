#pragma once

#include <qmainwindow.h>
#include "ui_Power2NumerWindow.h"
#include "Power2NumbersHelp.h"
#include "Power2NumbersExample.h"

/**
 * \brief Okno pot�g dw�jek
 *
 * klasa odpowiedzialna za operacje na okienku algorytmu pot�g dw�jek
 *
 */

class Power2NumbersWindow: public QMainWindow
{
	Q_OBJECT;
	Ui::Power2Numbers ui;
public:
	Power2NumbersWindow(QWidget* parent = nullptr);
	~Power2NumbersWindow();
	Power2NumbersHelp power2NumbersHelp;
	Power2NumbersExample power2NumberExample;
	void resetUI();
public slots:
	void on_computeButton_clicked();
	void on_actionInstrukcja_triggered();
	void on_actionPrzyklad_triggered();

};

