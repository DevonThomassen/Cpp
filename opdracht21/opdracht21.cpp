/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   opdracht21.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "Bestelling.h"
#include "Bezorging.h"

int main()
{
	// Constructie
	Bestelling bestelling1;
	Bezorging bezorging1;

	// UI
	cout << "Welkom bij de bestelapp van Domino's\n"
		<< "Plaats hier je bestelling: \n\n"
		<< "Stel zelf je pizza samen\n";

	// Functieaanroep
	bestelling1.Invoeren();
	bestelling1.Weergeven();
	bezorging1.Invoeren(bestelling1);
	bezorging1.Weergeven();

	system("pause");
}