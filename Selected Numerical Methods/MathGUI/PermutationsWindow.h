#pragma once

#include <qmainwindow.h>
#include "ui_PermutationsWindow.h"
#include "PermutationHelp.h"
#include "PermutationExample.h"

/**
 * \brief Okno permutacje
 *
 * klasa odpowiedzialna za operacje na okienku algorytmu permutacji
 *
 */

class PermutationsWindow:public QMainWindow
{
	Q_OBJECT;
	Ui::PermutationsWindow ui;
public:
	PermutationsWindow(QWidget* parent = nullptr);
	~PermutationsWindow();
	PermutationHelp permutationHelp;
	PermutationExample permutationExample;
	void resetUI();
public slots:
	void on_computeButton_clicked();
	void on_actionInstrukcja_triggered();
	void on_actionPrzyklad_triggered();

};

