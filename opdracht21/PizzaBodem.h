#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   PizzaBodem.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class PizzaBodem
{
public:
	string pizzaBodemTypeH203;

	// Constructor
	PizzaBodem();

	// Methoden
	void Invoeren();
};

// Constructor
PizzaBodem::PizzaBodem()
{
};

// Methoden
void PizzaBodem::Invoeren()
{
	// Implementatie
	cout << "Voer de bodem van de pizza in: ";
	getline(cin, pizzaBodemTypeH203);
};
