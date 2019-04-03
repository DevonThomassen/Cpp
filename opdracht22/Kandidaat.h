#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Kandidaat.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "Burger.h"
#include "Organisatie.h"
#include "District.h"

// Declaratie
class Kandidaat
{
private:
	string orginisatieD204;
	string districtD202;

public:
	int bsnD201;
	string kandidaatH206;

	// Constructor
	Kandidaat();

	// Methoden
	void Invoeren();
	void Weergeven();
};

// Constructor
Kandidaat::Kandidaat()
{
};

// Methoden
void Kandidaat::Invoeren()
{
	// Constructie
	Burger burger2;
	Organisatie organisatie1;
	District district2;

	// Implementatie
	cout << "Voer uw kandidaat in: ";
	cin >> kandidaatH206;

	// Toekenning
	burger2.Invoeren();
	bsnD201 = burger2.bsnH201;
	organisatie1.Invoeren();
	orginisatieD204 = organisatie1.organisatieH204;
	district2.Invoeren();
	districtD202 = district2.districtH202;
};

void Kandidaat::Weergeven()
{
	// UI
	cout << "Kandidaat " << kandidaatH206 << " met burgerservicenummer " << bsnD201 << " van de organisatie " << orginisatieD204 << " woont in het district " << districtD202 << endl << endl;
};
