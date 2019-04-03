#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Organisatie.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class Organisatie
{
public:
	string organisatieH204;

	// Constructor
	Organisatie();

	// Methoden
	void Invoeren();
};

// Constructor
Organisatie::Organisatie()
{
};

// Methoden
void Organisatie::Invoeren()
{
	// UI
	cout << "Voer je organisatie in: ";
	cin >> organisatieH204;
};
