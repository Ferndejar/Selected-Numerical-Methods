#include "include\\lista.h"

lista::lista() {
	/*!
	Konstruktor listy
	*/
	begin = NULL;
}

lista::~lista() {
	/*!
	Dekonstruktor listy
	*/
	box* killer;
	while (begin!=NULL) {
		killer = begin;
		begin = begin->next;
		delete killer;
	}
}


void lista::insert(int number) {
	/*!
	Metoda pozwalaj¹ca wstawiæ elementy do listy
	*/
	box* actual;
	box* previous;
	actual = begin;
	previous = NULL;
	while (actual!=NULL) {
		previous = actual;
		actual = actual->next;
	}
	box* nowy = new box(number, NULL);
	if (previous!=NULL) {
		previous->next = nowy;
	}
	else {
		begin = nowy;
	}
}

QString lista::toString() const {
	/*!
	Metoda konwertujê elementy listy na QString
	*/
	box* actual;
	QString result;
	actual = begin;
	while (actual!=NULL) {
		result += QString::number(actual->value) += " ";
		actual = actual->next;
	}
	return result;
}
// actual- aktualny
// previous - poprzedni
// begin - poczatek
// next - nastepny