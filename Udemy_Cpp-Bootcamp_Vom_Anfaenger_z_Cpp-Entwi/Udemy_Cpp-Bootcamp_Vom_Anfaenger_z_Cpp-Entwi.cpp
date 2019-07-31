#include <iostream>
#include <string.h>
using namespace std;

void main()
{
	string getipptes;
	char eingabe[255] = { 'H','e','l','l','o', ' ', 'W','o','r','l','d' };
	
	cin >> getipptes;
	for (int i = 0; i <getipptes.length(); i++)
	{
		eingabe[i] = getipptes[i];
	}

	for (int i = 0; i <= getipptes.length(); i++)
	{
		if (eingabe[i] == '\0') 
		{
			cout << "\nContinue!\n";
			continue;
		}
		else
		{
			for (int j = (i + 1); j <= getipptes.length()-1; j++)
			{
				if (eingabe[i] == eingabe[j] && eingabe[i] != ' ')
					cout << eingabe[i] << "ist doppelt!" << endl;
			}
		}
		
	}
}