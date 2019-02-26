/************************** Module Header *******************************\
Opdracht:       opdracht6
Auteur:			Devon Thomassen
Aanmaakdatum:   14-02-2019 10:25
Bestandsnaam:   opdracht6.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Declaratie
int leerlingNummer;

string klasNaamD201,
	klasNaamH201,
	opleidingNaamD202,
	opleidingNaamH202,
	leerlingNaam;

// Implementatie 

void InvoerenLeerling() {
	// Toekenning hoofd-/deelverzameling
	klasNaamD201 = klasNaamH201;
	opleidingNaamD202 = opleidingNaamH202;

	cout << "Voer je leerlingnummer in: ";
	cin >> leerlingNummer;
	cout << "Voer je leerlingnaam in: ";
	cin >> leerlingNaam;
};

void InvoerenOpleiding() {
	cout << "Voer de opleidingsnaam in: ";
	cin >> opleidingNaamH202;
};

void InvoerenKlas() {
	cout << "Voer de klasnaam in: ";
	cin >> klasNaamH201;
};

void WeergevenLeerling() {
	cout << "\nLeerling " << leerlingNaam << " met leerlingnummer " << leerlingNummer
		<< "\nstaat ingeschreven bij de opleiding " << opleidingNaamD202 << endl;

	system("pause");

	cout << "Leerlingnummer " << leerlingNummer << " zit in klas " << klasNaamD201 << endl;
};

int main()
{
	// Functieaanroep
	InvoerenKlas();
	InvoerenOpleiding();
	InvoerenLeerling();
	WeergevenLeerling();

	// UIs
	system("pause");
};
