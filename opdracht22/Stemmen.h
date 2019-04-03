#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht22
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 20:23
Bestandsnaam:   Stemmen.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "Jaar.h"

// Declaratie
class Stemmen
{
public:
	int bsnStemmerBsnKandidaatVerkiezingsJaar[3];
	// [0] = Burgerservicenummer van de Stemmer
	// [1] = Burgerservicenummer van de Kandidaat
	// [2] = Verkiezingjaar 

	// Constructor
	Stemmen();

	// Methoden
	void Invoeren(Stemmer stemmer1, Kandidaat kandidaat1);
	void Weergeven();
};

// Constructor
Stemmen::Stemmen()
{
};

// Methoden
void Stemmen::Invoeren(Stemmer stemmer1, Kandidaat kandidaat1)
{
	// Constructie
	Jaar jaar;

	// Toekennen
	jaar.Invoeren();

	bsnStemmerBsnKandidaatVerkiezingsJaar[0] = stemmer1.bsnD201;
	bsnStemmerBsnKandidaatVerkiezingsJaar[1] = kandidaat1.bsnD201;
	bsnStemmerBsnKandidaatVerkiezingsJaar[2] = jaar.jaarH203;
};

void Stemmen::Weergeven()
{
	// UI
	cout << "Burgerservicenummer " << bsnStemmerBsnKandidaatVerkiezingsJaar[0] << " stemt op burgerservicenummer " 
		<< bsnStemmerBsnKandidaatVerkiezingsJaar[1] << " in het verkiezingsjaar " << bsnStemmerBsnKandidaatVerkiezingsJaar[2] << endl << endl;
};
