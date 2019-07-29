#include <stdio.h>
#include <iostream>
using namespace std;

int eingabeProzente()
{
	int input;
	cout << "Geben sie bitte Prozente an: ";
	cin >> input;
	return input;
	//wenn mit Buchstabeneingabe vorab: cond: <=50%, >100%, noString
}
void main()
{
	string buchstaben[4] = {"E", "N", "T", "P"};
	//string actualPersTyp;
	int prozente[4];
	for (int i = 0; i < 4; i++)
		prozente[i] = eingabeProzente();
	
	for (int i = 0; i < 4; i++)
		if (prozente[0] > 50)
			buchstaben[0] = "I";
			

	/*actualPersTyp = buchstaben;*/
	//ihr typ ist:
	cout << "\nIhr Persoenlichkeits-Typ ist: " << buchstaben[0]+ buchstaben[1] << endl;
	
}