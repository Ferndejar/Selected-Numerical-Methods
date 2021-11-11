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
	Metoda sprawia gdy wybierzemy kontrolke sqrtRadioButton(przesuni�cie o pierwiastek) to pole Warto�� jest odblokowana, je�li nie to jest wyszarzona.
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
	Metoda ustawia warto�� PI w kontrolce bez mo�liwo�ci jej zmiany przez u�ytkownika
	*/
	ui.valueEditBox->setText("3.14159265359");
}

void ModuloShiftWindow::on_eRadioButton_toggled(bool on) {
	/*!
	Metoda ustawia warto�� "e" w kontrolce bez mo�liwo�ci jej zmiany przez u�ytkownika
	*/
	ui.valueEditBox->setText("2.71828182846");
}

void ModuloShiftWindow::on_computeButton_clicked() {
	float number /*!< liczba z kt�rej pierwiastek nas interesuje (podajemy ja tylko przy wyborze opcji "o pierwiastek") */
		,shift;  /*!< liczba kt�rej wielokrotno�ci rozwazamy */
	float fraction = 0.0; /*!< bierzaca czesc ulamkowa */
	int tab[10] = {0,0,0,0,0,0,0,0,0,0}; /*!< Przechowuje liczbe wyst�pie� cz�ci u�amkowych w kolejnych podprzedzia�ach d�ugo�ci 0.1 przedzia�u [0,1) */
	int size; /*!< liczba wielokrotno�ci jakie rozwa�amy */
	int interval_selector; /*!< wyb�r podprzedzia�u do kt�rego wpada cz�� u�amkowa */
	try {
		size = getInt(ui.sizeEditBox); // przypisanie warto�ci z kontrolki sizeEditBox(rozmiar)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	
	QString resultText;
	Modulo_Shift mod;
	if (size <= 0)
	{
		/*Liczba pierwszych wielokrotno�ci jakie rozwazamy, powinna by� to liczba naturalna*/
		resultText += QString("Liczba wielokrotnosci musi byc dodatnia. Podaj liczbe wielokrotnoci jeszcze raz.\n");
		ui.resultTextBox->setText(resultText);
		return;
	}
	try {
		if (ui.sqrtRadioButton->isChecked()) {

			number = getFloat(ui.valueEditBox); // przypisanie warto�ci z kontrolki valueEditBox(warto��)
			shift = sqrt(number);

			if (number < 0)
			{	/*Podana liczba musi by� dodatnia, gdy� wyci�gamy z niej pierwiastek. Program sprawdza czy wprowadzono liczb� naturaln� i je�li nie wy�wietla komunikat*/
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
	
	/*!Metoda oblicza cz�ci u�amkowe kolejnych wielokrotno�ci podanej liczby, przydziela je do odpowiedniego podprzedzia�u przedzia�u [0,1] i zlicza liczb� wyst�pie� w tych podprzedzia�ach*/
	for (int i = 0; i<size; i++) {
		fraction = mod.fractional_part(fraction+shift); // oblicza cz�� u�amkow� bierz�cej wielokrotno�ci danej liczby.
		interval_selector = 0;
		while (fraction>=(interval_selector+1)*0.1-0.000000001) // rozpoznaje podprzedzia� do kt�rego wpada cz�� u�amkowa 
			interval_selector++;
		tab[interval_selector]++; // dolicza wyst�pienie w odpowiednim podprzedziale
	}
	for (int i = 0; i<10; i++)
		resultText += QString::number(tab[i]) += " ";  /*!< wypisuje liczbe wyst�pie� w kolejnych podprzedzia�ach */
	ui.resultTextBox->setText(resultText);
}
void ModuloShiftWindow::on_actionInstrukcja_triggered() {
	/*!
	Metoda otwiera okno z instrukcj� do przesuni�� modulo
	*/
	moduloShiftHelp.show();
}

void ModuloShiftWindow::on_actionPrzyklad_triggered() {
	/*!
	Metoda otwiera okno z przyk�adami do przesuni�� modulo
	*/
	moduloShiftExample.show();
}
