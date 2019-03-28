/************************** Module Header *******************************\
Opdracht:       opdracht19
Auteur:			Devon Thomassen
Aanmaakdatum:   27-03-2019 10:00
Bestandsnaam:   Leerling.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie

class Leerling : private Datum
{
private:
public:
	string naam;
	int nummerMobiel[2];

	// Constructor
	Leerling();

	// Methoden
	void Invoeren();
	void Weergeven();
};

// Implementatie

// Constructor
Leerling::Leerling()
{
};

void Leerling::Invoeren()
{
	// Initialisatie
	naam = "Luna";
	nummerMobiel[0] = 12345;
	nummerMobiel[1] = 612345678;
	dagMaandJaar[0] = 28;
	dagMaandJaar[1] = 03;
	dagMaandJaar[2] = 2013;
};

void Leerling::Weergeven()
{
	// UI
	cout << "Leerling " << naam << " met leerlingnummer " << nummerMobiel[0] << " maak gebruik van het mobiele nummer " << nummerMobiel[1] << endl;
	cout << "Leerling " << naam << " is geboren op de datum " << dagMaandJaar[0] << "/" << dagMaandJaar[1] << "/" << dagMaandJaar[2] << endl;
};
