#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#include "leerling.h"
#include "leerjaar.h"
#include "semester.h"
#include "periode.h"
#include "schooljaar.h"
#include "semesterInLeerjaar.h"
#include "toets.h"

int main()
{
	invoerenLeerling();
	invoerenPeriode();
	invoerenSemesterInLeerjaar();
	invoerenToets();
	weergevenToets();
}
