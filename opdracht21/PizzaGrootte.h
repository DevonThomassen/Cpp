#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   PizzaGrootte.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class PizzaGrootte
{
public:
	string pizzaGrootteTypeH202;

	// Constructor
	PizzaGrootte();

	// Methoden
	void Invoeren();
};

// Constructor
PizzaGrootte::PizzaGrootte()
{
};

// Methoden
void PizzaGrootte::Invoeren()
{
	cout << "Voer de grootte van de pizza in: ";
	getline(cin, pizzaGrootteTypeH202);
}
