#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   PizzaNaam.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class PizzaNaam
{
public:
	string pizzaNaamH201;

	// Constructor
	PizzaNaam();

	// Methoden
	void Invoeren();
};

// Constructor
PizzaNaam::PizzaNaam()
{
};

// Methoden
void PizzaNaam::Invoeren()
{
	// Implementatie
	cout << "Voer de naam van de pizza in: ";
	getline(cin, pizzaNaamH201);
}

