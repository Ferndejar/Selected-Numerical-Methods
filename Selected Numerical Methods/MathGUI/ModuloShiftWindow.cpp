#include "ModuloShiftWindow.h"
#include "include\\\ModuloShift.h"
#include "input.h"

ModuloShiftWindow::ModuloShiftWindow(QWidget * parent):
	QMainWindow(parent)
{
	ui.setupUi(this);
}

ModuloShiftWindow::~ModuloShiftWindow() {
}

void ModuloShiftWindow::resetUI() {
	/*!
	Metoda ustawia startowe parametry w kontrolkach
	*/
	ui.sqrtRadioButton->setChecked(true);
	ui.valueEditBox->setText("0");
	ui.resultTextBox->setText("");
	ui.sizeEditBox->setText("0");
}

void ModuloShiftWindow::on_sqrtRadioButton_toggled(bool on) {
	/*!
	Metoda sprawia gdy wybierzemy kontrolke sqrtRadioButton(przesuniêcie o pierwiastek) to pole Wartoœæ jest odblokowana, jeœli nie to jest wyszarzona.
	*/
	if (on) {
		ui.valueEditBox->setEnabled(true);
		ui.valueEditBox->setText("0");
	}
	else
		ui.valueEditBox->setEnabled(false);
}

void ModuloShiftWindow::on_piRadioButton_toggled(bool on) {
	/*!
	Metoda ustawia wartoœæ PI w kontrolce bez mo¿liwoœci jej zmiany przez u¿ytkownika
	*/
	ui.valueEditBox->setText("3.14159265359");
}

void ModuloShiftWindow::on_eRadioButton_toggled(bool on) {
	/*!
	Metoda ustawia wartoœæ "e" w kontrolce bez mo¿liwoœci jej zmiany przez u¿ytkownika
	*/
	ui.valueEditBox->setText("2.71828182846");
}

void ModuloShiftWindow::on_computeButton_clicked() {
	float number /*!< liczba z której pierwiastek nas interesuje (podajemy ja tylko przy wyborze opcji "o pierwiastek") */
		,shift;  /*!< liczba której wielokrotnoœci rozwazamy */
	float fraction = 0.0; /*!< bierzaca czesc ulamkowa */
	int tab[10] = {0,0,0,0,0,0,0,0,0,0}; /*!< Przechowuje liczbe wyst¹pieñ czêœci u³amkowych w kolejnych podprzedzia³ach d³ugoœci 0.1 przedzia³u [0,1) */
	int size; /*!< liczba wielokrotnoœci jakie rozwa¿amy */
	int interval_selector; /*!< wybór podprzedzia³u do którego wpada czêœæ u³amkowa */
	try {
		size = getInt(ui.sizeEditBox); // przypisanie wartoœci z kontrolki sizeEditBox(rozmiar)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	
	QString resultText;
	Modulo_Shift mod;
	if (size <= 0)
	{
		/*Liczba pierwszych wielokrotnoœci jakie rozwazamy, powinna byæ to liczba naturalna*/
		resultText += QString("Liczba wielokrotnosci musi byc dodatnia. Podaj liczbe wielokrotnoci jeszcze raz.\n");
		ui.resultTextBox->setText(resultText);
		return;
	}
	try {
		if (ui.sqrtRadioButton->isChecked()) {

			number = getFloat(ui.valueEditBox); // przypisanie wartoœci z kontrolki valueEditBox(wartoœæ)
			shift = sqrt(number);

			if (number < 0)
			{	/*Podana liczba musi byæ dodatnia, gdy¿ wyci¹gamy z niej pierwiastek. Program sprawdza czy wprowadzono liczbê naturaln¹ i jeœli nie wyœwietla komunikat*/
				resultText += QString("Podaj liczbe nieujemna \n");
				ui.resultTextBox->setText(resultText);
				return;
			}

		}
		else {
			shift = getFloat(ui.valueEditBox);
		}
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	
	/*!Metoda oblicza czêœci u³amkowe kolejnych wielokrotnoœci podanej liczby, przydziela je do odpowiedniego podprzedzia³u przedzia³u [0,1] i zlicza liczbê wyst¹pieñ w tych podprzedzia³ach*/
	for (int i = 0; i<size; i++) {
		fraction = mod.fractional_part(fraction+shift); // oblicza czêœæ u³amkow¹ bierz¹cej wielokrotnoœci danej liczby.
		interval_selector = 0;
		while (fraction>=(interval_selector+1)*0.1-0.000000001) // rozpoznaje podprzedzia³ do którego wpada czêœæ u³amkowa 
			interval_selector++;
		tab[interval_selector]++; // dolicza wyst¹pienie w odpowiednim podprzedziale
	}
	for (int i = 0; i<10; i++)
		resultText += QString::number(tab[i]) += " ";  /*!< wypisuje liczbe wyst¹pieñ w kolejnych podprzedzia³ach */
	ui.resultTextBox->setText(resultText);
}
void ModuloShiftWindow::on_actionInstrukcja_triggered() {
	/*!
	Metoda otwiera okno z instrukcj¹ do przesuniêæ modulo
	*/
	moduloShiftHelp.show();
}

void ModuloShiftWindow::on_actionPrzyklad_triggered() {
	/*!
	Metoda otwiera okno z przyk³adami do przesuniêæ modulo
	*/
	moduloShiftExample.show();
}
