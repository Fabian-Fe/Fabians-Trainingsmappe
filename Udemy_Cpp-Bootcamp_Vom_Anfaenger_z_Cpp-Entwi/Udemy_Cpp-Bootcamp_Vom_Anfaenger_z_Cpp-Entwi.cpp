#include <iostream>
#include <string.h>
#include <array>
using namespace std;

int average(double* x, int length)
{
	double summe=0; //einfach nur ein zaehler
	for (int i = 0; i < length; i++)
		summe += x[i];
	//cout << "length ist: " << length<< endl;
	return (summe/length);
}


int main() 
{
		int c, length=0;
		double x[255];
		cout << "Wie lang? (Max 255)" << endl;
		while (length < 1 || length >255 || length == NULL) 
		{				//ERROR, wenn cin kein int ist z.B. qwert oder .99
			cin >> length;
			cout << "\n length: "<< length<< endl;
			cin.clear();
		}

		for (c=0; c < length; c++)
		{
			cout << "\nWert " << (c + 1) << ":";
			cin >> x[c];
		}
		cout<< "\nDer Durchschnitt ist: " << average(x, length);
	
}

