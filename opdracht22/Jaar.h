#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Jaar.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class Jaar
{
public:
	int jaarH203;

	// Constructor
	Jaar();

	// Methoden
	void Invoeren();
};

// Constructor
Jaar::Jaar()
{
};

// Methoden
void Jaar::Invoeren()
{
	// UI
	cout << "Voer hier het jaar in: ";
	cin >> jaarH203;
};
