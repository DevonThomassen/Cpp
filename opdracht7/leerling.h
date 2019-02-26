#include "klas.h"

string leeringNaam,
	klasNaamD204;

int leerlingNummerH206;

void invoerenLeerling() {
	cout << "Voer je leerlingnummer in:\n";
	cin >> leerlingNummerH206;
	cout << "Voer je voornaam in:\n";
	cin >> leeringNaam;

	invoerenKlas();

	klasNaamD204 = klasNaamH204;
};

void weergevenLeerling() {

};
