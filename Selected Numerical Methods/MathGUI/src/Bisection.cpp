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
	Oblicza warto�� wielomianu w podanym punkcie
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
	Funkcja implementuje algorytm przybli�ania  miejsca zerowego wielomianu metoda po�owienia
	*/
    float x;
    x=(end+begin)/2; // �rodek rozwa�anego przedzia�u
    while((end-begin)/2>epsilon)
    {
        if(polynomial_value(tab,size,begin)*polynomial_value(tab,size,x)>0) //bada czy warto�ci funkcji na pocz�tku przedzia�u i jego �rodku s� tych samych znak�w
        {
            begin=x; // �rodek poprzedniego przedzia�u staje si� pocz�tkiem nowego
        }
        else
        {
            end=x; // �rodek poprzedniego przedzia�u staje si� ko�cem nowego
        }
        x=(begin+end)/2; // wyznacza �rodek nowego przedzia�u
    }

    return x;
}
