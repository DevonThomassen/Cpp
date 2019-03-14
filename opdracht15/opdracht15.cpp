/************************** Module Header *******************************\
Opdracht:       opdracht15
Auteur:			Devon Thomassen
Aanmaakdatum:   13-03-2019 15:40
Bestandsnaam:   opdracht15.cpp
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
	Leerling leerling1, leerling2;
	Datum datum;

	// Initialisatie
	InvoerenLeerlingen(leerling1, leerling2);
	InvoerenLeerlingnummer();
	ZoekenOpLeerlingnummer(leerling1, leerling2);
}
