#include "input.h"
#include <qlist.h>
#include <qregularexpression.h>


// s znaczy kazdy bia³y znak czyli spacja lub tabulator
// + znaczy ze znak musi sie pojawiæ przynajmniej raz 
// * znaczy ze znak mo¿e siê nie pojawiæ w ogóle lub mo¿e siê pojawiæ dowolnie wiele razy

float* textToFloatArray(QString const& text, int& size) {
	/*!
	Funkcja sczytuje rozdzielone po spacji wyrazy, konwertuje z Qstring na float i sprawdza czy sa typu float
	*/
	QList<QString> parts = text.split(QRegularExpression("\\s+"));
	size = parts.size();
	float* data = new float[size];
	bool ok;
	int i = 0;
	for (QString const& s : parts) {
		data[i++] = s.toFloat(&ok);
		if (!ok)
			throw std::exception("Dane nieprawidlowe.");
	}
	return data;
}

void textToCoordinatesArrays(QString const & text, float *& xs, float *& ys, int & size) {
	/*!
	Funkcja sprawdza czy prawid³owo podano pary - elementy w parze oddzielone spacjami i œrednikiem ponadto weryfikuje 
	czy sa typu float oraz przypisuje pierwsze wartoœci z kazdej pary do cechy X, a drugie do Cechy Y.
	*/
	QList<QString> parts = text.split(QRegularExpression("\\s*;\\s*"));
	size = parts.size();
	xs = new float[size];
	ys = new float[size];
	bool ok;
	int i = 0;
	for (QString const& s : parts) {
		QList<QString> scoef = s.split(QRegularExpression("\\s+"));
		if (scoef.size() == 2) {
			xs[i] = scoef[0].toFloat(&ok);
			if (!ok)
				throw std::exception("Dane nieprawidlowe.");
			ys[i] = scoef[1].toFloat(&ok);
			if (!ok)
				throw std::exception("Dane nieprawidlowe.");
			++i;
		}
		else {
			delete[] xs;
			delete[] ys;
			xs = nullptr;
			ys = nullptr;
			size = 0;
			return;
		}
	}
}

int getInt(QLineEdit const * lineEdit) {
	/*!
	Funkcja konwertuje text na int i sprawdza czy podana wartoœæ przez u¿ytkownika jest typu int
	*/
	bool ok;
	int result = lineEdit->text().toInt(&ok);
	if (ok)
		return result;
	else
		throw std::exception("Dane nieprawidlowe.");
}
float getFloat(QLineEdit const * lineEdit) {
	/*!
	Funkcja konwertuje text na float i sprawdza czy podana wartoœæ przez u¿ytkownika jest typu float
	*/
	bool ok;
	float result = lineEdit->text().toFloat(&ok);
	if (ok)
		return result;
	else
		throw std::exception("Dane nieprawidlowe.");
}
