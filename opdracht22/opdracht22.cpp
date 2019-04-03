/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   opdracht22.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include <iostream>
#include <string>

using namespace std;

#include "Stemmer.h"
#include "Kandidaat.h"
#include "Stemmen.h"
#include "Hoogheemraadschap.h"

int main()
{
	// Constructie
	Stemmer stemmer1;
	Kandidaat kandidaat1;
	Stemmen stemmen1;
	Hoogheemraadschap hoogheemraadschap1;

	// Functieaanroep
	stemmer1.Invoeren();
	stemmer1.Weergeven();

	kandidaat1.Invoeren();
	kandidaat1.Weergeven();

	stemmen1.Invoeren(stemmer1, kandidaat1);
	stemmen1.Weergeven();

	hoogheemraadschap1.Invoeren();
	hoogheemraadschap1.Weergeven();

	system("pause");
};
