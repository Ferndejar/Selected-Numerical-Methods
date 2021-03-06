#ifndef MODULOSHIFT_H
#define MODULOSHIFT_H

/**
 * \brief Przesunięcie modulo
 *
 * klasa umożliwiająca operacje dla przesuniecia modulo
 *
 */

class Modulo_Shift
{
    private:
        int x;
    public:
        Modulo_Shift();
        ~Modulo_Shift();
        float fractional_part(float x);

};

#endif // PRZESUNIECIE_MODULO_H
