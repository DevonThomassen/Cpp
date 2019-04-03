#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Stemmer.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "Burger.h"
#include "District.h"

// Declaratie
class Stemmer
{
private:
	string stemmerH205;
	string districtD202;

public:
	int bsnD201;

	// Constructor
	Stemmer();

	// Methoden
	void Invoeren();
	void Weergeven();
};

// Constructor
Stemmer::Stemmer()
{
};

// Methoden
void Stemmer::Invoeren()
{
	// Constructie
	Burger burger1;
	District district1;

	// Implementatie
	cout << "Voer je naam in: ";
	cin >> stemmerH205;

	// Toekenning
	burger1.Invoeren();
	bsnD201 = burger1.bsnH201;
	district1.Invoeren();
	districtD202 = district1.districtH202;

};

void Stemmer::Weergeven()
{
	// UI
	cout << "Stemmer " << stemmerH205 << " met het burgerservicenummer " << bsnD201 << " woont in het district " << districtD202 << endl << endl;
};
