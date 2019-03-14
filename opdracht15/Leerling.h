/************************** Module Header *******************************\
Opdracht:       opdracht15
Auteur:			Devon Thomassen
Aanmaakdatum:   13-03-2019 15:40
Bestandsnaam:   Leerling.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
struct Leerling
{
	// Declaratie
	string naam;
	int nummerMobiel[2];
	// Overerving (constructie)
	Datum geboorteDatum;
};

int leerlingnummer;

// Prototype
void InvoerenLeerlingen(Leerling& leerling1, Leerling& leerling2);
void InvoerenLeerlingnummer();
void ZoekenOpLeerlingnummer(Leerling leerling1, Leerling leerling2);

// Implentatie
void InvoerenLeerlingen(Leerling& leerling1, Leerling& leerling2) {
	// Initialisatie van Leerling1
	leerling1.naam = "Piet";
	leerling1.nummerMobiel[0] = 1;
	leerling1.nummerMobiel[1] = 123;
	leerling1.geboorteDatum.dagMaandJaar[0] = 21;
	leerling1.geboorteDatum.dagMaandJaar[1] = 06;
	leerling1.geboorteDatum.dagMaandJaar[2] = 1981;
	
	// Initialisatie van Leerling2
	leerling2.naam = "Mien";
	leerling2.nummerMobiel[0] = 2;
	leerling2.nummerMobiel[1] = 234;
	leerling2.geboorteDatum.dagMaandJaar[0] = 01;
	leerling2.geboorteDatum.dagMaandJaar[1] = 01;
	leerling2.geboorteDatum.dagMaandJaar[2] = 1980;
};

void InvoerenLeerlingnummer() {
	// Initialisatie
	cout << "Voer het leerlingnummer in: ";
	cin >> leerlingnummer;
};

void ZoekenOpLeerlingnummer(Leerling leerling1, Leerling leerling2) {
	// UI
	if (leerling1.nummerMobiel[0] == leerlingnummer) {
		cout << "Leerlingnummer " << leerlingnummer << " hoort bij de leerlingnaam " << leerling1.naam << endl;
	}
	else {
		if (leerling2.nummerMobiel[0] == leerlingnummer) {
			cout << "Leerlingnummer " << leerlingnummer << " hoort bij de leerlingnaam " << leerling2.naam << endl;
		}
		else {
			cout << "Er bestat geen leerling met het ingevoerde leerlingnummer: " << leerlingnummer;
		}
	}
};