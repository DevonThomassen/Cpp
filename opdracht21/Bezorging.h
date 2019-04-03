/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   Bezorging.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

// Declaratie
class Bezorging
{
private:
	string postCode;
	string huisNummer;
	string bezorgDag;
	string bezorgTijd;
	int actieCode;

public:
	string bestelCodeD204;
	
	// Constructor
	Bezorging();

	// Methoden
	void Invoeren(Bestelling bestelling1);
	void Weergeven();
};

// Constructor
Bezorging::Bezorging()
{
};

// Methoden
void Bezorging::Invoeren(Bestelling bestelling1)
{
	// Implementatie
	cout << "Waar wil je dat de bestelling wordt bezorgd? \n"
		<< "Voer je postcode in: ";
	cin >> postCode;
	cout << "Voer je huisnummer in: ";
	cin >> huisNummer;
	cout << "Op welke dag wil je je bestelling laten bezorgen: ";
	cin >> bezorgDag;
	cout << "Op welk tijdstip wil je je bestelling laten bezorgen: ";
	cin >> bezorgTijd;
	cout << "Voer je actiecode in: ";
	cin >> actieCode;

	// Toekenning
	bestelCodeD204 = bestelling1.bestelCodeH204;
}

void Bezorging::Weergeven()
{
	// UI
	cout << "\nJe bestelling met bestelcode " << bestelCodeD204 << " wordt op: \n"
		<< bezorgDag << ", " << bezorgTijd << endl
		<< "bezorgt op het adres:\n"
		<< "Postcode " << postCode << " huisnummer " << huisNummer << endl << endl
		<< "Je hebt de volgende actiecode gebruikt: " << actieCode << endl;
}
