#include "include\\LinearRegression.h"

LinearRegression::LinearRegression()
{
    //ctor
}

LinearRegression::~LinearRegression()
{
    //dtor
}


float LinearRegression::expected_Value(float tabX[],int size_1)
{
	/*!
	Funkcja oblicza wartoœæ oczekiwan¹
	*/
    float s=0.0;
    for(int i=0;i<size_1;i++)
    {
        s=s+tabX[i];
    }
    s=s/size_1;

    return s;
}

float LinearRegression::second_Moment(float tabX[],int size_1)
{
	/*!
	Funkcja oblicza drugi moment zwyk³y
	*/
    float s=0.0;
    for(int i=0;i<size_1;i++)
    {
        s=s+pow(tabX[i],2);
    }
    s=s/size_1;

    return s;
}

float LinearRegression::expected_Value_of_Product(float tabX[],int size_1,float tabY[],int size_2)
{
	/*!
	Funkcja oblicza wartoœæ oczekiwan¹ iloczynu zmiennych losowych
	*/
    float s=0.0;
    for(int i=0;i<size_1;i++)
    {
        s=s+tabX[i]*tabY[i];
    }
    s=s/size_1;

    return s;
}

// Wspolczynnik_kierunkowy to Slope

float LinearRegression::slope(float tabX[],int size_1,float tabY[],int size_2)
{
	/*!
	Funkcja oblicza wspó³czynnik kierunkowy prostej regresji drugiego rodzaju
	*/
    float x;
    x=(expected_Value_of_Product(tabX,size_1,tabY,size_2)-expected_Value(tabX,size_1)*expected_Value(tabY,size_2))/(second_Moment(tabX,size_1)-pow(expected_Value(tabX,size_1),2));
    return x;
}

// Wyraz_Wolny to Intercept

float LinearRegression::intercept(float tabX[],int size_1,float tabY[],int size_2)
{
	/*!
	Funkcja oblicza wyraz wolny prostej regresji drugiego rodzaju
	*/
    float x;
    x=expected_Value(tabY,size_2)-slope(tabX,size_1,tabY,size_2)*expected_Value(tabX,size_1);
    return x;
}

float LinearRegression::orthogonal_Slope(float tabX[],int size_1,float tabY[],int size_2)
{
	/*!
	Funkcja oblicza wspó³czynnik kierunkowy prostej regresji ortogonalnej
	*/
    float x,variance_Y,variance_X,covariance_XY;
    variance_Y=second_Moment(tabY,size_1)-pow(expected_Value(tabY,size_1),2); //VarY=EY^2-(EY)^2
    variance_X=second_Moment(tabX,size_1)-pow(expected_Value(tabX,size_1),2); //VarX=EX^2-(EX)^2
    covariance_XY=expected_Value_of_Product(tabX,size_1,tabY,size_2)-expected_Value(tabX,size_1)*expected_Value(tabY,size_1); // Cov(X,Y)=EXY-EX*EY
    if(covariance_XY==0)
    {
        x=0;
    }
	else if (pow(covariance_XY,2) == variance_X * variance_Y)
	{
		x = slope(tabX, size_1, tabY, size_2); 
	} 
    else
    {
       x=(variance_Y-variance_X+pow(pow((pow(variance_Y,1)-pow(variance_X,1)),2)+4*pow(covariance_XY,2),0.5))/(2*covariance_XY);
    }

    return x;
}

float LinearRegression::orthogonal_Intercept(float tabX[],int size_1,float tabY[],int size_2)
{
	/*!
	Funkcja oblicza wyraz wolny prostej regresji ortogonalnej
	*/
    float x;
    x=expected_Value(tabY,size_1)-orthogonal_Slope(tabX,size_1,tabY,size_2)*expected_Value(tabX,size_1);
    return x;
}
