#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

typedef struct pTyp			//Vector-Feld wird nach diesem Struct-Muster erstellt
{
	int anzahl;
	double preis;
	string bezeichnung;
} postenTyp;
void groesseFeld(vector<postenTyp>& feld)		//
{
	string eingabe;
	int postenZahl;
	istringstream eingabeStrom;

	cout << "Zahl der Rechnungsposten: ";
	getline(cin, eingabe);				
	if (eingabe == "")			//wenn leer
	{
		cout << "Keine Eingabe" << endl;
		postenZahl = 0;				//setze zu 0
	}
	else
	{
		//cout << "jetzt .str eingabe";
		eingabeStrom.str(eingabe);		//returns den stringwert von eingabe
		eingabeStrom >> postenZahl;		
		eingabeStrom.clear();		//leert den buffer
	}

	feld.resize(postenZahl);		//neue Vector-Feld-Gr��e sogro� wie eingabe
}
void eingabe(postenTyp& p)
{
	string eingabe;
	istringstream eingabeStrom;
	cout << "Anzahl ";
	getline(cin, eingabe);
	if (eingabe == "")
		p.anzahl = 0;
	else
	{
		eingabeStrom.str(eingabe);
		eingabeStrom >> p.anzahl;
		eingabeStrom.clear();
	}

	cout << "Preis: ";
	getline(cin, eingabe);
	if (eingabe == "")
		p.preis = 0.0;
	else
	{
		eingabeStrom.str(eingabe);
		eingabeStrom >> p.preis;
		eingabeStrom.clear();
	}
	cout << "Bezeichnung: ";
	getline(cin, p.bezeichnung); //keine Exception for incorrect stringeingabe
}
void eingabeFeld(vector<postenTyp>& feld)
{
	for (postenTyp& p : feld)	//schleife f�r jeden der 3 Inhalte
		eingabe(p);			//f�hrt eingabe aus
}
void ausgabe(const postenTyp& p)
{
	cout << p.anzahl << " " << p.preis
		<< " " << p.bezeichnung << endl;
}
void ausgabeFeld(const vector<postenTyp>& feld)
{
	for (const postenTyp& p : feld)		//schleife f�r �bergebenes pFeld
		//warum schleife? es gibt vector<postenTyp> pFeld ?????
		ausgabe(p);						//ausgabe()
}

void main()
{
	vector<postenTyp> pFeld;		//erstellt Vector-Feld

	groesseFeld(pFeld);				//wie gro�? -> Resize
	eingabeFeld(pFeld);				//f�llt Vector-Feld mit Eingaben
	
	cout << "Noch ein Element:" << endl;
	postenTyp pNeu;				//es wird ein neues Element erstellt
	eingabe(pNeu);				//dieses mit werten gef�llt
	pFeld.push_back(pNeu);		//und an vector-Feld angeh�ngt

	ausgabeFeld(pFeld);
}

