#include "include\\ModuloShift.h"

Modulo_Shift::Modulo_Shift()
{
    //ctor
}

Modulo_Shift::~Modulo_Shift()
{
    //dtor
}

float Modulo_Shift::fractional_part(float x)
{
	/*!
	Funkcja oblicza czêœæ u³amkow¹ liczby
	*/
    while(x>=1.0)
    {
        x=x-1.0;
    }
    return x;
}
