/************************** Module Header *******************************\
Opdracht:       Opdracht 3
Auteur:			Devon Thomassen
Aanmaakdatum:   12-02-2019 11:41
Bestandsnaam:   Opdracht 3.cpp
Versie:         0.1    <Omschrijvingen>
				0.2    <Omschrijving aanpassen>
				1.0 Release

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	// Declaratie
	int leerlingNummer;
	string leerlingNaam,
		opleidingNaam,
		klasNaam;

	// Initialisatie
	cout << "Voer je leerlingnummer in: "; cin >> leerlingNummer;
	cout << "Voer je voornaam in: "; cin >> leerlingNaam;
	cout << "Voer de opleidingnaam in: "; cin >> opleidingNaam;
	cout << "Voer de klasnaam in: "; cin >> klasNaam;

	// UI
	cout << "\nJouw ingevoerde leerlinggegevens bestaan uit:\n"
		<< "Leerling " << leerlingNaam << " met leerlingnummer " << leerlingNummer << " staat ingeschreven bij opleiding: " << opleidingNaam
		<< "\nLeerlingnummer " << leerlingNaam << " zit in klas " << klasNaam << "\n\n";
	system("pause");
}
