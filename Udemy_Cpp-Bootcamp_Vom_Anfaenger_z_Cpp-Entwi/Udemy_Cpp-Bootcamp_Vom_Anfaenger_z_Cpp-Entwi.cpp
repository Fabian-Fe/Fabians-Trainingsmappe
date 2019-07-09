#include <iostream>
#include <string.h>
using namespace std;

bool reset = 0;
string eingabe(string message)
{
	string ergebnis = "";
	cout << message;
	cin >> ergebnis;
	return ergebnis;
}

int kostenberechnen(string ziel) 
{
	float preis = 0;
	if (ziel=="hamburg"||ziel=="Hamburg")
	{
		preis = 50;
	}
	else if (ziel == "Hannover"|| ziel == "hannover"|| ziel == "Hanover"|| ziel == "hanover")
	{
		preis = 70;
	}
	/*else					//geplant ist die main Funktion neu zu starten
	{
		reset = true;
		int main();
		cout << "Reset aktiviert!";
	}*/ 

	return preis;

}


int main() 
{
	if (reset == true) 
	{
		cout << "\nDIE EINGABE WAR FALSCH! VON VORNE!!!\n";
		reset = 0;
	}
	string ziel = eingabe("Wohin wollen Sie fahren\n");
	int kosten = kostenberechnen(ziel);
	string bahncard = eingabe("\nHaben Sie eine Bahncard\n");
	cout << "\nDer Preis fuer ihr Ziel " << ziel << " betraegt " << kosten << " Euro!\n";
	

	
	
}		

/*mit Card
ohne/mit rückfahrt
kostet $$
eingezahlen
Es fehlen noch $$*/