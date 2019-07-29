#include <iostream>
//#include <cstring> // warum unnoetig?
using namespace std;



void main() 
{
		char zEins[20];
	zEins[0] = 'H';
	zEins[1] = 'a';
	zEins[2] = 'l';
	zEins[3] = 'l';
	zEins[4] = 'o';
	zEins[5] = '\0';
	//char zEins[] = "Hallo";
	
	cout << "2.Buchstabe: " << zEins[1] << endl;
	
	cout << "Erstellen: " << zEins << endl;

	strcat_s(zEins, " Welt!");
	cout << "Erweitern: " << zEins << endl;

	cout << "Anzahl der Zeichen: " << strlen(zEins) << endl
		<< "Zeichen als CodeNummern: ";


	for (int i = 0; i <= 10; i++)
		cout << (int)zEins[i] << " ";

	strcpy_s(zEins, "Bonjour");
	cout << endl << "Zuweisen: " << zEins<< endl;

	if (!strcmp(zEins, "Bonjour"))//(wenn gleich, gibt strcomp 0 aus
		cout << "Beide Texte sind gleich" << endl;

	cout <<"StrComp mit A u B: "<< strcmp("A", "B") << endl;//A,B = -1, 
														//A,A=0
														//B,A=1
	char zZwei[] = "Good Morning!";
	cout << "Erstellen: " << zZwei << endl;

	if (strcmp(zZwei, zEins) > 0)
		cout << zEins << " steht vor " << zZwei;
}
