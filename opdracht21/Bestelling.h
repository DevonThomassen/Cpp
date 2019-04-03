/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Devon Thomassen
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   Bestelling.h
Versie:         0.1
				0.2
				1.0

\************************************************************************/

#include "PizzaNaam.h"
#include "PizzaGrootte.h"
#include "PizzaBodem.h"

// Declaratie
class Bestelling
{
private: 
	string pizzaNaamD201;
	string pizzaGrootteTypeD202;
	string pizzaBodemTypeD203;
	int aantal;

public:
	string bestelCodeH204;
	
	// Constructor
	Bestelling();

	// Methoden
	void Invoeren();
	void Weergeven();
};

// Constructor
Bestelling::Bestelling()
{
};

// Methoden
void Bestelling::Invoeren()
{
	// Constructie
	PizzaNaam pizzanaam1;
	PizzaGrootte pizzagrootte1;
	PizzaBodem pizzabodem1;

	// Toekenning
	pizzanaam1.Invoeren();
	pizzaNaamD201 = pizzanaam1.pizzaNaamH201;
	pizzagrootte1.Invoeren();
	pizzaGrootteTypeD202 = pizzagrootte1.pizzaGrootteTypeH202;
	pizzabodem1.Invoeren();
	pizzaBodemTypeD203 = pizzabodem1.pizzaBodemTypeH203;

	// Implementatie
	cout << "Geef het aantal pizza's op: ";
	cin >> aantal;
	cout << "Voer de bestelcode in: ";
	cin >> bestelCodeH204;
};

void Bestelling::Weergeven()
{
	// UI
	cout << "\nDe volgende bestelling hebbe we voor je geregisteerd: \n" 
		<< aantal << "x Pizza "<< pizzaNaamD201 << ", " << pizzaGrootteTypeD202 << " met " << pizzaBodemTypeD203 << " bodem. \n";
	cout << endl;
};
