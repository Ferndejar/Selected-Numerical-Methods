#ifndef BISECTION_H
#define BISECTION_H
#include <iostream>
#include <cmath>
//using namespace std;

/**
 * \brief Metoda Połowienia
 *
 * klasa umożliwiająca operację dla metody połowienia
 *
 */

class Bisection
{
    public:
        Bisection();
        ~Bisection();
        float polynomial_value(float tab[],int size,float x);
        float bisection_Method(float tab[],int size,float begin,float end,float epsilon);
};

#endif // BISECTION_H
