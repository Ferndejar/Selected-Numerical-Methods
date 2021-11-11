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
	int power; /*!< Liczba pierwszych pot�g dw�jki kt�re s� rozwa�ane */
	long long number = 2; /*!< Przechowuje warto�� bierz�cej pot�gi dw�jki zaczynaj�c od pierwszej */
	long long firstnumber; /*!< Przechowuje cyfr� wiod�c� rozwa�anej pot�gi dw�jki */
	int practical_apperance_array[9] = { 0,0,0,0,0,0,0,0,0 }; /*!< Zlicza liczb� wyst�pie� kolejnych cyfr jako wiod�cych w pot�gach dw�jki */
	float theoretical_apperance_array[9];  /*!<  teoretyczna liczba wyst�pie� kolejnych cyfr jako wiod�cych pot�g dw�jki (obliczona zgodnie z formu�� zawarta w "Invitation to Ergodic Theory")*/
	Power2Numbers compute; // obiekt klasy Power2Numbers
	try {
		power = getInt(ui.powerEditBox); // przypisanie warto�ci z kontrolki powerEditBox(pot�ga 2)
	}
	catch (std::exception e) {
		ui.resultTextBox->setText(e.what());
		return;
	}
	QString resultText; //obiekt klasy QString

	if (power <= 0)
	{
		/*Liczba rozwa�anych pot�g dw�jki powinna by� naturalna. Program sprawdza czy wprowadzono liczb� naturaln� i je�li nie wy�wietla komunikat*/
		resultText += QString("Podaj liczbe dodatnia, tyle ile pierwszych poteg dwojki  Cie interesuje \n");
		ui.resultTextBox->setText(resultText);
		return;
	}

	/*!
	Program oblicza cyfry wiod�ce kolejnych pot�g dw�jki i zlicza liczb� ich wyst�pie�.
	*/
	for (int i = 1; i<=power; i++) {
		firstnumber = compute.firstNumber(number); //obliczamy cyfr� wiod�c� badanej pot�gi dw�jki
		practical_apperance_array[ firstnumber-1 ]++; // zliczamy kolejne wyst�pienie danej liczby jako cyfry wiod�cej
		number *= 2; //zwi�kszamy  wyk�adnik pot�gi dw�jki o jeden
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

	/*! Program wyznacza teoretyczn� liczb� wyst�pie� r�nych cyfr jako cyfr wiod�cych pot�g dw�jki obliczon� na podstawie "Invitation to Ergodic Theory"*/
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
	Metoda otwiera okno z instrukcj� do pot�g dw�jek
	*/
}

void Power2NumbersWindow::on_actionPrzyklad_triggered()
{
	/*!
	Metoda otwiera okno z przyk�adami do pot�g dw�jek
	*/
	power2NumberExample.show();
}
