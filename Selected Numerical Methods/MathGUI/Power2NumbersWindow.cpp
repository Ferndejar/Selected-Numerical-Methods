#include "Power2NumbersWindow.h"
#include "include\\Power2Numbers.h"
#include "input.h"


Power2NumbersWindow::Power2NumbersWindow(QWidget * parent):
	QMainWindow(parent) {
	ui.setupUi(this);
}

Power2NumbersWindow::~Power2NumbersWindow() {
}

void Power2NumbersWindow::resetUI() {
	/*!
	Metoda ustawia startowe parametry w kontrolkach
	*/
	ui.powerEditBox->setText("0");
	ui.resultTextBox->setText("");
}

void Power2NumbersWindow::on_computeButton_clicked() {
	int power; /*!< Liczba pierwszych potêg dwójki które s¹ rozwa¿ane */
	long long number = 2; /*!< Przechowuje wartoœæ bierz¹cej potêgi dwójki zaczynaj¹c od pierwszej */
	long long firstnumber; /*!< Przechowuje cyfrê wiod¹c¹ rozwa¿anej potêgi dwójki */
	int practical_apperance_array[9] = { 0,0,0,0,0,0,0,0,0 }; /*!< Zlicza liczbê wyst¹pieñ kolejnych cyfr jako wiod¹cych w potêgach dwójki */
	float theoretical_apperance_array[9];  /*!<  teoretyczna liczba wyst¹pieñ kolejnych cyfr jako wiod¹cych potêg dwójki (obliczona zgodnie z formu³¹ zawarta w "Invitation to Ergodic Theory")*/
	Power2Numbers compute; // obiekt klasy Power2Numbers
	try {
		power = getInt(ui.powerEditBox); // przypisanie wartoœci z kontrolki powerEditBox(potêga 2)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	QString resultText; //obiekt klasy QString

	if (power <= 0)
	{
		/*Liczba rozwa¿anych potêg dwójki powinna byæ naturalna. Program sprawdza czy wprowadzono liczbê naturaln¹ i jeœli nie wyœwietla komunikat*/
		resultText += QString("Podaj liczbe dodatnia, tyle ile pierwszych poteg dwojki  Cie interesuje \n");
		ui.resultTextBox->setText(resultText);
		return;
	}

	/*!
	Program oblicza cyfry wiod¹ce kolejnych potêg dwójki i zlicza liczbê ich wyst¹pieñ.
	*/
	for (int i = 1; i<=power; i++) {
		firstnumber = compute.firstNumber(number); //obliczamy cyfrê wiod¹c¹ badanej potêgi dwójki
		practical_apperance_array[ firstnumber-1 ]++; // zliczamy kolejne wyst¹pienie danej liczby jako cyfry wiod¹cej
		number *= 2; //zwiêkszamy  wyk³adnik potêgi dwójki o jeden
		if (number > pow(2, 30))
		{
			number = number / 1000;
		}
			
	}
	resultText += QString("Kolejne cyfry pojawily sie z czestoscia: \n");
	for (int i = 0; i < 9; i++)
	{
		resultText += QString::number(practical_apperance_array[i]) += " ";
	}
	resultText += "\n";

	resultText += QString("Podczas gdy czestosc teoretyczna wynosi: \n");

	/*! Program wyznacza teoretyczn¹ liczbê wyst¹pieñ ró¿nych cyfr jako cyfr wiod¹cych potêg dwójki obliczon¹ na podstawie "Invitation to Ergodic Theory"*/
	for (int i = 0; i<9; i++) {
		theoretical_apperance_array[i] = float(power)*log10(float((i+2))/(i+1));
		resultText += QString::number((int)(theoretical_apperance_array[i]+0.5)) += " ";
	}
	resultText += '\n';

	ui.resultTextBox->setText(resultText);
}
void Power2NumbersWindow::on_actionInstrukcja_triggered() {
	power2NumbersHelp.show();
	/*!
	Metoda otwiera okno z instrukcj¹ do potêg dwójek
	*/
}

void Power2NumbersWindow::on_actionPrzyklad_triggered()
{
	/*!
	Metoda otwiera okno z przyk³adami do potêg dwójek
	*/
	power2NumberExample.show();
}
