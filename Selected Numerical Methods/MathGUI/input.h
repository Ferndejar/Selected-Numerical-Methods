#pragma once

#include <qstring.h>
#include <qlineedit.h>

float* textToFloatArray(QString const& text, int& size);
void textToCoordinatesArrays(QString const & text, float *& xs, float *& ys, int & size);
int getInt(QLineEdit const* lineEdit);
float getFloat(QLineEdit const* lineEdit);