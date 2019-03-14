/************************** Module Header *******************************\
Opdracht:       opdracht14
Auteur:			Devon Thomassen
Aanmaakdatum:   13-03-2019 12:00
Bestandsnaam:   opdracht14.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "Deelnemer.h"
#include "Registratie.h"

int main()
{
	// Constructie
	Deelnemer deelnemer1;
	Registratie registratie1;

	// Initialisatie
	InvoerenDeelnemer(deelnemer1);
	WeergevenDeelnemer(deelnemer1);
	InvoerenRegistratie(registratie1, deelnemer1);
	WeergevenRegistratie(registratie1);
}
