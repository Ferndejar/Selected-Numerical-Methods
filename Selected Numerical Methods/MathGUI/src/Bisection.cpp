#include "include\\BISECTION.h"
using namespace std;

Bisection::Bisection()
{
    //ctor
}

Bisection::~Bisection()
{
    //dtor
}

float Bisection::polynomial_value(float tab[],int size,float x)
{
	/*!
	Oblicza wartoœæ wielomianu w podanym punkcie
	*/
    float s=0.0;
    for(int i=0;i<size;i++)
    {
        s=s+tab[i]*pow(x,size-i-1);
    }

    return s;
}


float Bisection:: bisection_Method(float tab[],int size,float begin,float end,float epsilon)
{
	/*!
	Funkcja implementuje algorytm przybli¿ania  miejsca zerowego wielomianu metoda po³owienia
	*/
    float x;
    x=(end+begin)/2; // œrodek rozwa¿anego przedzia³u
    while((end-begin)/2>epsilon)
    {
        if(polynomial_value(tab,size,begin)*polynomial_value(tab,size,x)>0) //bada czy wartoœci funkcji na pocz¹tku przedzia³u i jego œrodku s¹ tych samych znaków
        {
            begin=x; // œrodek poprzedniego przedzia³u staje siê pocz¹tkiem nowego
        }
        else
        {
            end=x; // œrodek poprzedniego przedzia³u staje siê koñcem nowego
        }
        x=(begin+end)/2; // wyznacza œrodek nowego przedzia³u
    }

    return x;
}
