#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

void main()
{
	string eingabe;
	getline(cin, eingabe);		//nimmt auch leerzeichen
	
	for (int i = 0; i <= eingabe.length()-1; i++)
	{
		eingabe[i] = tolower(eingabe[i]);	//to lower case
		if (eingabe[i] == '\0')		//FALLS ende erreicht
		{
			cout << "\nString ab hier leer\n";
			continue;
		}
		else
		{
			for (int j = (i + 1); j <= eingabe.length()-1; j++)
			{
				if (eingabe[i] == eingabe[j] && eingabe[i] != ' ')
					cout << eingabe[i] << " ist doppelt!" << endl;
			}
		}
		
	}
}