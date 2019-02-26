int leerlingNummerD206,
	opleidingPeriodeD205,
	opleidingSchooljaarD201,
	toetsonderdeelA,
	toetsonderdeelB,
	toetsonderdeelC,
	opleidingLeerjaarD202,
	opleidingSemesterD203;
double toetsEindcijfer;

void invoerenToets() {

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

void weergevenToets() {
	cout << "Eindcijfer: " << toetsEindcijfer << endl;
};
