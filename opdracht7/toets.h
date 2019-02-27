// Declaratie
int leerlingNummerD206,
	opleidingPeriodeD205,
	opleidingSchooljaarD201,
	toetsonderdeelA,
	toetsonderdeelB,
	toetsonderdeelC,
	opleidingLeerjaarD202,
	opleidingSemesterD203;
double toetsEindcijfer;

// Implementatie 
void invoerenToets() {

	leerlingNummerD206 = leerlingNummerH206;
	opleidingPeriodeD205 = opleidingPeriodeH205;
	opleidingSchooljaarD201 = invoerenSchooljaar();
	opleidingLeerjaarD202 = invoerenLeerjaar();
	opleidingSemesterD203 = invoerenSemester();

	cout << "Voer de toetsuitslagen in: \n"
		<< "Onderdeel A: ";
	cin >> toetsonderdeelA;
	cout << "Onderdeel B: ";
	cin >> toetsonderdeelB;
	cout << "Onderdeel C: ";
	cin >> toetsonderdeelC;

	toetsEindcijfer = static_cast<double>(toetsonderdeelA + toetsonderdeelB + toetsonderdeelC) / 3;
};

// UI
void weergevenToets() {
	cout << leerlingNummerD206 << " behaalt in periode " << opleidingPeriodeD205 << " van schooljaar " << opleidingSchooljaarD201 << " voor het vak C++ voor het OnderdeelA het cijfer " << toetsonderdeelA << endl;
	cout << leerlingNummerD206 << " behaalt in periode " << opleidingPeriodeD205 << " van schooljaar " << opleidingSchooljaarD201 << " voor het vak C++ voor het OnderdeelB het cijfer " << toetsonderdeelB << endl;
	cout << leerlingNummerD206 << " behaalt in periode " << opleidingPeriodeD205 << " van schooljaar " << opleidingSchooljaarD201 << " voor het vak C++ voor het OnderdeelC het cijfer " << toetsonderdeelC << endl;
	cout << leerlingNummerD206 << " behaalt in periode " << opleidingPeriodeD205 << " van schooljaar " << opleidingSchooljaarD201 << " voor het vak C++ het eindcijfer " << toetsEindcijfer << endl;
};
