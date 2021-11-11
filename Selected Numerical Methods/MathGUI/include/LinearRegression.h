#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H
#include<iostream>
#include<cmath>

/**
 * \brief Regresja liniowa
 *
 * klasa umo¿liwiaj¹ca operacje dla regresji drugiego rodzaju i ortogonalnej
 *
 */
class LinearRegression
{
    public:
        LinearRegression();
        ~LinearRegression();
        float slope(float tabX[],int size_1,float tabY[],int size_2);
        float intercept(float tabX[],int size_1,float tabY[],int size_2);
        float expected_Value(float tabX[],int size_1);
        float second_Moment(float tabX[],int size_1);
        float expected_Value_of_Product(float tabX[],int size_1,float tabY[],int size_2);
        float orthogonal_Slope(float tabX[],int size_1,float tabY[],int size_2);
        float orthogonal_Intercept(float tabX[],int size_1,float tabY[],int size_2);


};

#endif // LINEARREGRESSION_H
