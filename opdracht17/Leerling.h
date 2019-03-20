/************************** Module Header *******************************\
Opdracht:       opdracht16
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

int dag;
int maand;
int jaar;

// Prototype
void InvoerenLeerlingen(Leerling[]);
void InvoerenZoekGeboortedatum();
void ZoekenOpGeboorteDatum(Leerling[]);

// Implentatie
void InvoerenLeerlingen(Leerling leerling[5])
{
	// Initialisatie van Leerling1
	leerling[0].naam = "Piet";
	leerling[0].nummerMobiel[0] = 1;
	leerling[0].nummerMobiel[1] = 123;
	leerling[0].geboorteDatum.dagMaandJaar[0] = 01;
	leerling[0].geboorteDatum.dagMaandJaar[1] = 01;
	leerling[0].geboorteDatum.dagMaandJaar[2] = 1980;

	// Initialisatie van Leerling2
	leerling[1].naam = "Mien";
	leerling[1].nummerMobiel[0] = 2;
	leerling[1].nummerMobiel[1] = 234;
	leerling[1].geboorteDatum.dagMaandJaar[0] = 01;
	leerling[1].geboorteDatum.dagMaandJaar[1] = 01;
	leerling[1].geboorteDatum.dagMaandJaar[2] = 1980;

	// Initialisatie van Leerling3
	leerling[2].naam = "Jan";
	leerling[2].nummerMobiel[0] = 3;
	leerling[2].nummerMobiel[1] = 345;
	leerling[2].geboorteDatum.dagMaandJaar[0] = 01;
	leerling[2].geboorteDatum.dagMaandJaar[1] = 01;
	leerling[2].geboorteDatum.dagMaandJaar[2] = 1980;

	// Initialisatie van Leerling4
	leerling[3].naam = "Trui";
	leerling[3].nummerMobiel[0] = 4;
	leerling[3].nummerMobiel[1] = 456;
	leerling[3].geboorteDatum.dagMaandJaar[0] = 21;
	leerling[3].geboorteDatum.dagMaandJaar[1] = 06;
	leerling[3].geboorteDatum.dagMaandJaar[2] = 1981;

	// Initialisatie van Leerling5
	leerling[4].naam = "Klaas";
	leerling[4].nummerMobiel[0] = 5;
	leerling[4].nummerMobiel[1] = 567;
	leerling[4].geboorteDatum.dagMaandJaar[0] = 15;
	leerling[4].geboorteDatum.dagMaandJaar[1] = 03;
	leerling[4].geboorteDatum.dagMaandJaar[2] = 1969;
};

void InvoerenZoekGeboortedatum()
{
	// Initialisatie
	cout << "Voer het geboortedatum in:\n";
	cout << "Voer dagwaarde in: "; cin >> dag;
	cout << "Voer maandwaarde in: "; cin >> maand;
	cout << "Voer jaarwaarde in: "; cin >> jaar;
	cout << endl;
};

void ZoekenOpGeboortedatum(Leerling leerling[5])
{
	// UI
	bool x = false;
	for (int i = 0; i < sizeof(leerling) + 1; i++)
	{
		if (leerling[i].geboorteDatum.dagMaandJaar[0] == dag &&
			leerling[i].geboorteDatum.dagMaandJaar[1] == maand &&
			leerling[i].geboorteDatum.dagMaandJaar[2] == jaar)
		{
			cout << "Geboortedatum " << dag << "-" << maand << "-" << jaar << " hoort bij de leerlingnaam " << leerling[i].naam << endl;
			x = true;
		}
	}
	if (!x) cout << "Leerling met geboortedatum " << dag << "-" << maand << "-" << jaar << " is niet gevonden.\n";
};
