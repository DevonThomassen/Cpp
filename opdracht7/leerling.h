#include "klas.h"

// Declaratie
string leeringNaam,
	klasNaamD204;

int leerlingNummerH206;

// Implementatie 
void invoerenLeerling() {
	cout << "Voer je leerlingnummer in:\n";
	cin >> leerlingNummerH206;
	cout << "Voer je voornaam in:\n";
	cin >> leeringNaam;

	invoerenKlas();

	klasNaamD204 = klasNaamH204;
};

void weergevenLeerling() {
	cout << leeringNaam << " met " << leerlingNummerH206 << " zit in " << klasNaamD204 << endl;
};
