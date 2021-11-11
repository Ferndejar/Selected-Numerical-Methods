#include "MathGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); /*! Wspiera(skaluje) DPI dla wiekszych rozdzielczosci*/	
	QApplication a(argc, argv);
	MathGUI w; // obiekt klasy MathGUI
	w.show(); // wywoluje glowne okienko klasy MathGUI
	return a.exec();
	
}

