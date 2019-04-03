#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   District.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class District
{
public:
	string districtH202;

	// Constructor
	District();

	// Methoden
	void Invoeren();
};

// Constructor
District::District()
{
};

// Methoden
void District::Invoeren()
{
	// UI
	cout << "Voer uw district in: ";
	cin >> districtH202;
};
