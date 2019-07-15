#include <stdio.h>
#include <iostream>

using namespace std;

float map(float value, float istart, float istop, float ostart, float ostop)
{
	return ostart + (ostop - ostart) * ((value - istart) / (istop - istart));
}

float eingabe(string message)
{
	float i;
	cout << message<< endl;
	cin >> i;
	return i;
}

int main() {
	float numbToRemap = eingabe ("\nBitte Wert zum remappen angeben: ");
	float oldlow = eingabe("\nBitte Wert fuer oldlow: ");
	float oldhigh = eingabe("\nBitte Wert fuer oldhigh: ");
	float newlow = eingabe("\nBitte Wert fuer newlow: ");
	float newhigh = eingabe("\nBitte Wert newhigh ");
	
	cout << "\nBeim remapping es " << map(numbToRemap, oldlow, oldhigh, newlow, newhigh);
}




/**/