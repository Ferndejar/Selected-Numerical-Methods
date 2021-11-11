#include "include\\Power2Numbers.h"
#include <cmath>
Power2Numbers::Power2Numbers()
{
    //ctor
}

Power2Numbers::~Power2Numbers()
{
    //dtor
}

long long Power2Numbers::howManyNumbers(long long x)
{
	/*!
	Funkcja oblicza z ilu cyfr sk�ada si� podana liczba
	*/
    long long n=1;
    while(x>(pow(10,n)-0.5))
    {
        n++;
    }
    return n;
}

long long Power2Numbers::firstNumber(long long y)
{
	/*!
	Funkcja oblicza wiod�c� cyfre w liczbie
	*/
  long long d=1;
  while(y>d*(pow(10,howManyNumbers(y)-1))-0.5)
  {
      d++;
  }
  return d-1;
}
