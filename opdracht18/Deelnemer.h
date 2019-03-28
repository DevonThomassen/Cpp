/************************** Module Header *******************************\
Opdracht:       opdracht18
Auteur:			Devon Thomassen
Aanmaakdatum:   20-03-2019 11:00
Bestandsnaam:   Deelnemer.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie 
class Deelnemer
{
private:
	string deelnemerNaam;

public:
	int rugNummerChipnummer[2];

	// Constructor
	Deelnemer()
	{
	};

	// Methoden
	void Invoeren();
	void Weergeven();
};

// Implementatie
void Deelnemer::Invoeren()
{
	//Initialiseren
	cout << "Voer deelnemernaam in: ";
	cin >> deelnemerNaam;
	cout << "Voer rugnummer in: ";
	cin >> rugNummerChipnummer[0];
	cout << "Voer chipnummer in: ";
	cin >> rugNummerChipnummer[1];
};

void Deelnemer::Weergeven()
{
	// UI
	cout << "Deelnemer " << deelnemerNaam << " heeft het rugnummer " << rugNummerChipnummer[0] << " en het chipnummer " << rugNummerChipnummer[1] << endl;
};
