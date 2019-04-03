#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Burger.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class Burger 
{
public:
	int bsnH201;

	// Constructor
	Burger();

	// Methoden
	void Invoeren();
};

// Constructor
Burger::Burger()
{
};

// Methoden
void Burger::Invoeren()
{
	// UI
	cout << "Voer uw burgerservicenummer in: ";
	cin >> bsnH201;
};
