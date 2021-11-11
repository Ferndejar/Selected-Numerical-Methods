#ifndef NEWTON_H
#define NEWTON_H
#include <iostream>
#include <cmath>
#include "include\\BISECTION.h"

/**
 * \brief Metoda Newtona
 *
 * klasa umo¿liwiaj¹ca operacje dla Metody Newtona
 *
 */
class Newton : public Bisection
{
    private:

    public:
        Newton();
        ~Newton();
        float derivative_value(float tab[],int size,float x);
        float newton_Method(float tab[],int size,float begin,float epsilon);
};

#endif // NEWTON_H
