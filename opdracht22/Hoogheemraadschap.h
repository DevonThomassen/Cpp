#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Hoogheemraadschap.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "District.h"

// Declaratie
class Hoogheemraadschap
{
private:
	string districtD202;

public:
	string hoogH208;

	// Constructor
	Hoogheemraadschap();

	// Methoden
	void Invoeren();
	void Weergeven();
};

// Constructor
Hoogheemraadschap::Hoogheemraadschap()
{
};

// Methoden
void Hoogheemraadschap::Invoeren()
{
	// Constructor
	District district3;

	// Implementatie
	cout << "Voer het hoogheemraadschap in: ";
	cin >> hoogH208;

	// Toekenning
	district3.Invoeren();
	districtD202 = district3.districtH202;
};

void Hoogheemraadschap::Weergeven()
{
	// UI
	cout << "Het hoogheemraadschap " << hoogH208 << " beheert het water in het district " << districtD202 << endl << endl;
};
