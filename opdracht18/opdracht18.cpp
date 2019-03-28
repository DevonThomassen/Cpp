/************************** Module Header *******************************\
Opdracht:       opdracht18
Auteur:			Devon Thomassen
Aanmaakdatum:   20-03-2019 11:00
Bestandsnaam:   opdracht18.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "Deelnemer.h"

int main()
{
	// Constructie
	Deelnemer deelnemer1;

	// Functieaanroep
	deelnemer1.Invoeren();
	deelnemer1.Weergeven();

	system("pause");
}
