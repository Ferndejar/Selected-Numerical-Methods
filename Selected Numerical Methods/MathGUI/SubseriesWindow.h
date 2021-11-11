#pragma once

#include <qmainwindow.h>
#include "ui_SubseriesWindow.h"
#include "SubseriesHelp.h"
#include "SubseriesGreedyHelp.h"
#include "SubseriesLazyHelp.h"
#include "SubseriesGapsHelp.h"
#include "SubseriesExample.h"
#include "SubseriesGreedyExample.h"
#include "SubseriesLazyExample.h"
#include "SubseriesGapsExample.h"

/**
 * \brief Okno podszeregów
 *
 * klasa odpowiedzialna za operacje na okienku algorytmu podszeregi
 *
 */

class SubseriesWindow: public QMainWindow
{
	Q_OBJECT;
	Ui::SubseriesWindow ui;
public:
	SubseriesWindow(QWidget* parent = nullptr);
	~SubseriesWindow();
	SubseriesHelp subseriesHelp;
	SubseriesGreedyHelp subseriesGreedyHelp;
	SubseriesLazyHelp subseriesLazyHelp;
	SubseriesGapsHelp subseriesGapsHelp;
	SubseriesExample subseriesExample;
	SubseriesGreedyExample subseriesGreedyExample;
	SubseriesLazyExample subseriesLazyExample;
	SubseriesGapsExample subseriesGapsExample;

	void resetUI();
public slots:
	void on_computeButton_clicked();
	void on_condCoincidentRadioButton_toggled(bool on);
	void on_actionConditionally_triggered();
	void on_actionGreedy_triggered();
	void on_actionLazy_triggered();
	void on_actionGaps_triggered();
	void on_actionConditionallyExample_triggered();
	void on_actionGreedyExample_triggered();
	void on_actionLazyExample_triggered();
	void on_actionGapsExample_triggered();


};

