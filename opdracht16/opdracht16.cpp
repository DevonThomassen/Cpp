/************************** Module Header *******************************\
Opdracht:       opdracht16
Auteur:			Devon Thomassen
Aanmaakdatum:   13-03-2019 15:40
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
	Datum datum;

	// Initialisatie
	InvoerenLeerlingen(leerling);
	InvoerenLeerlingnummer();
	ZoekenOpLeerlingnummer(leerling);
}
