/************************** Module Header *******************************\
Opdracht:       opdracht4
Auteur:			Devon Thomassen
Aanmaakdatum:   12-02-2019 11:41
Bestandsnaam:   opdracht4.cpp
Versie:         0.1
				0.2
				1.0 

\************************************************************************/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "*************************\n"
		<< "leerjaar Semester Periode\n"
		<< "   2        2        7\n"
		<< "   2        2        8\n"
		<< "   3        1        9\n"
		<< "   3        1        10\n"
		<< "*************************\n";

	// Declaratie
	string schoolJaar;
	int opleidingLeerjaar, opleidingSemester, opleidingPeriode;

	// Initialisatie
	cout << "Voer opleidingsgegevens in: \nSchooljaar: ";
	cin >> schoolJaar;
	cout << "Leerjaar: ";
	cin >> opleidingLeerjaar;
	cout << "Semester: ";
	cin >> opleidingSemester;
	cout << "Periode: ";
	cin >> opleidingPeriode;

	// Declaratie
	string leerlingNaam;
	int leerlingNummer;

	// Initialisatie
	cout << "\nVoer de leerlinggegevens in: \nLeerlingNaam in: ";
	cin >> leerlingNaam;
	cout << "Leerlingnummer: ";
	cin >> leerlingNummer;

	// Declaratie 
	string klasNaam;

	// Initialisatie
	cout << "\nVoer de klasgegevens in: \nKlasnaam: ";
	cin >> klasNaam;

	// Declaratie
	int toetsOnderdeelA, toetsOnderdeelB, toetsOnderdeelC;

	//Initialisatie
	cout << "\nVoer de toetsuitslagen in: \nOnderdeel A: ";
	cin >> toetsOnderdeelA;
	cout << "Onderdeel B: ";
	cin >> toetsOnderdeelB;
	cout << "Onderdeel c: ";
	cin >> toetsOnderdeelC;
	
	//Toekennen
	const int toetsVermenigFactorOnderdeelB = 2, toetsVermenigFactorOnderdeelC = 3;
	float toetsEindcijfer = static_cast <float> (toetsOnderdeelA +
		(toetsOnderdeelB * toetsVermenigFactorOnderdeelB) +
		(toetsOnderdeelC * toetsVermenigFactorOnderdeelC)) / 6;

	//UI
	cout << "\nToetsgegevens: \nLeerling" << leerlingNaam << " heeft leerlingnummer " << leerlingNummer
		<< "\nLeerlingnummer " << leerlingNummer << " zit in klas " << klasNaam
		<< "\nLeerlingnummer " << leerlingNummer << " behaalt in periode " << opleidingPeriode << " van het schooljaar " << schoolJaar << " voor het vak C++ het eindcijfer: " << toetsEindcijfer;
}
