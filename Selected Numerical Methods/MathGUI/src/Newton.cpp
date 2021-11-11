#include "include\\Newton.h"

Newton::Newton()
{
    //ctor
}

Newton::~Newton()
{
    //dtor
}

//derivative - pochodna

float Newton :: derivative_value(float tab[],int size,float x)
{
	/*!
	Oblicza warto�� pochodnej wielomianu w podanym punkcie
	*/
    float s=0.0;
    for(int i=1;i<size;i++)
    {
        s=s+(size-i)*tab[i-1]*pow(x,size-i-1);
    }

    return s;
}


float Newton :: newton_Method(float tab[],int size,float start_point,float epsilon)
{
	/*!
	Funkcja implementuje algorytm przybli�ania miejsca zerowego wielomianu metod� Newtona
	*/
    float iteration,new_iteration;
    iteration=start_point; // przyjmujemy punkt startowy oblicze�
	new_iteration = iteration - polynomial_value(tab, size, iteration) / (derivative_value(tab, size, iteration)); // wyznacza pierwsz� iteracj� metody Newtona - miejsce zerowe stycznej do wykresu wielomianu w punkcie startowym
    while(abs(iteration-new_iteration)>epsilon) // bada czy odleg�o�� mi�dzy kolejnymi iteracjami jest wystarczaj�co ma�a
    {
		iteration = new_iteration;
		new_iteration = iteration - polynomial_value(tab, size, iteration) / (derivative_value(tab, size, iteration)); //wyznacza rekurencyjnie kolejn� iteracj�

       
    }

    return new_iteration;
}
