#ifndef LISTA_H
#define LISTA_H
#include<iostream>
#include <qstring.h>
using namespace std;

/**
 * \brief Struktura listy
 *
 * struktura umo¿liwiaj¹ca operacje na liscie
 *
 */

struct lista
{
private:
	struct box
	{
		int value;
		box* next;
		box(int w, box* n) {
			value = w;
			next = n;
		}
	};
	box* begin;
public:
	lista();
	~lista();
	void insert(int liczba);
	QString toString() const;

};

#endif // LISTA_H
