/************************** Module Header *******************************\
Opdracht:       opdracht5
Auteur:			Devon Thomassen
Aanmaakdatum:   13-02-2019	09:38
Bestandsnaam:   opdracht5.cpp
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// UI
	cout << "---   ---   --- \n"
		"|a|   |b|   |c| \n"
		"---   ---   --- \n"
		" .     .     .  \n"
		"  .    .    .   \n"
		"   .   .   .    \n"
		"    .  .  .     \n"
		"      ---       \n"
		"      |d|       \n"
		"      ---       \n"
		"    .  .  .     \n"
		"   .   .   .    \n"
		"  .    .    .   \n"
		" .     .     .  \n"
		"---   ---   --- \n"
		"|e|   |f|   |g| \n"
		"---   ---   --- \n\n";

	// Declaratie
	int a, b, c, d, e, f, g;

	// Initialisatie
	cout << "Voer het cijfer voor letter a in: "; cin >> a;
	cout << "Voer het cijfer voor letter b in: "; cin >> b;
	cout << "Voer het cijfer voor letter c in: "; cin >> c;
	cout << "Voer het cijfer voor letter d in: "; cin >> d;
	cout << "Voer het cijfer voor letter e in: "; cin >> e;
	cout << "Voer het cijfer voor letter f in: "; cin >> f;
	cout << "Voer het cijfer voor letter g in: "; cin >> g;

	// UI
	cout << "\n---   ---   --- \n"
		"|" << a << "|   |" << b << "|   |" << c << "| \n"
		"---   ---   --- \n"
		" .     .     .  \n"
		"  .    .    .   \n"
		"   .   .   .    \n"
		"    .  .  .     \n"
		"      ---       \n"
		"      |" << d << "|       \n"
		"      ---       \n"
		"    .  .  .     \n"
		"   .   .   .    \n"
		"  .    .    .   \n"
		" .     .     .  \n"
		"---   ---   --- \n"
		"|" << e << "|   |" << f << "|   |" << g << "| \n"
		"---   ---   --- \n";

	// Toekennen
	int adg = a + d + g,
		bdf = b + d + f,
		cde = c + d + e;

	// UI
	cout << "\nDe som van de lijn adg is " << adg << endl
		<< "De som van de lijn bdf is " << bdf << endl
		<< "De som van de lijn cde is " << cde << endl << endl;
}
