#include <iostream>
#include <string.h>
using namespace std;


float eingabeFloat(string message, float ausstehend)
{
	float ergebnis = 0;
	cout << message << ausstehend << endl;
	cin >> ergebnis;
	return ergebnis;
} 

string eingabeStr(string message)
{
	string ergebnis = "";
	cout << message;
	cin >> ergebnis;
	return ergebnis;
}

int kostenberechnen(string antwort)
{

	if (antwort == "hamburg" || antwort == "Hamburg" || antwort == "HAMBURG")
		return 50;
	else if (antwort == "Hannover" || antwort == "hannover" || antwort == "Hanover" || antwort == "hanover" || antwort == "HANNOVER")
		return 70;


}

float rabattisierung(string antwortBC, float kosten)
{

	if (antwortBC == "25")
	{
		return (kosten * .75);
	}
	else if (antwortBC == "50")
	{
		return (kosten * .5);
	}
	else
	{
		return kosten;
	}
}

void schuldenAbgleich(float eingezahlt, float gesamtpreis)			//rabattierterBetrag geht zu gesamtpreis über
{
	while (eingezahlt < gesamtpreis)
	{
		eingezahlt += eingabeFloat("Bitte jetzt noch zahlen: ", (gesamtpreis - eingezahlt));
	}

}


int main()
{
	string ziel = eingabeStr("Wohin wollen Sie fahren\n"); //ziel muss für später deklariert gebraucht.
														//gibt eingabeergebnis zurück
	int kosten = kostenberechnen(ziel);				//gibt an ziel gekoppelten preis zurück
	string bahncard = eingabeStr("\nHaben Sie die Bahncard 25 oder 50\n");
	float rabattierterBetrag = rabattisierung(bahncard, kosten);

	cout << "Regulaere Kosten sind " << kosten << " Euro, aber durch die BahnCard bleiben " << rabattierterBetrag << endl;
	schuldenAbgleich(0, rabattierterBetrag);

	cout << "\nVielen Dank fuer die Zahlung von " << rabattierterBetrag << " Euro!";
}

