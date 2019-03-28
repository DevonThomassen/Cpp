/************************** Module Header *******************************\
Opdracht:       opdracht19
Auteur:			Devon Thomassen
Aanmaakdatum:   27-03-2019 10:00
Bestandsnaam:   opdracht19.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "Datum.h";
#include "Leerling.h"

int main()
{
	// Constructie
	Leerling leerling1;

	// Functieaanroep
	leerling1.Invoeren();
	leerling1.Weergeven();

	system("pause");
}