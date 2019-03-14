/************************** Module Header *******************************\
Opdracht:       opdracht14
Auteur:			Devon Thomassen
Aanmaakdatum:   13-03-2019 12:00
Bestandsnaam:   Registratie.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
struct Registratie {
	// Declaratie
	string registratiePunt;
	int chipNummerRegistratieTijdJaar[3];
};

// Prototype
void InvoerenRegistratie(Registratie&, Deelnemer);
void WeergevenRegistratie(Registratie);

// Implentatie
void InvoerenRegistratie(Registratie& registratie, Deelnemer deelnemer) {
	// Toekennen
	registratie.chipNummerRegistratieTijdJaar[0] = deelnemer.rugnummerChipnummer[1];

	// Initialisatie
	cout << "Registartie van de deelnemer voor de NYCM.\n"
		<< "Voer het registartiepunt in: ";
	cin >> registratie.registratiePunt;
	cout << "Voer de registartietijd in: ";
	cin >> registratie.chipNummerRegistratieTijdJaar[1];
	cout << "Voer het jaartal in: ";
	cin >> registratie.chipNummerRegistratieTijdJaar[2];
	cout << endl;
};

void WeergevenRegistratie(Registratie registratie) {
	// UI
	cout << "Chipnummer " << registratie.chipNummerRegistratieTijdJaar[0] << " registreert voor NYCM in het jaartal " << registratie.chipNummerRegistratieTijdJaar[2] << " bij hetregistratiepunt " << registratie.registratiePunt << " de registratietijd " << registratie.chipNummerRegistratieTijdJaar[1];
};
