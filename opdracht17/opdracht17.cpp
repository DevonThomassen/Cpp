/************************** Module Header *******************************\
Opdracht:       opdracht17
Auteur:			Devon Thomassen
Aanmaakdatum:   20-03-2019 10:00
Bestandsnaam:   opdracht16.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;
#include "Datum.h"
#include "Leerling.h"

int main()
{
	// Constructie
	Leerling leerling[5];

	// Initialisatie
	InvoerenLeerlingen(leerling);
	InvoerenZoekGeboortedatum();
	ZoekenOpGeboortedatum(leerling);
}
