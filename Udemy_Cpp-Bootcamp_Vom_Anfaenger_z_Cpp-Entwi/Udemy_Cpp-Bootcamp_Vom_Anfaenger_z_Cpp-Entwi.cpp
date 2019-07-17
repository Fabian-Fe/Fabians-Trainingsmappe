#include <stdio.h>
#include <iostream>

using namespace std;

void main()
{
	double preis = 1.45;

	double &preisReferenzEins = preis;										// preis ist nun durch & referenziert
	cout << "preisReferenzEins: " << preisReferenzEins << " Euro" << endl;
	double &preisReferenzZwei = preisReferenzEins;							//preis is nun mit pREins und pRZwei ref
	cout << "preisReferenzZwei: " << preisReferenzZwei << " Euro" << endl;
	const double &preisReferenzDrei = preis;								//pRDrei ist const
	cout << "preisReferenzDrei: " << preisReferenzDrei << " Euro" << endl;
	preisReferenzZwei = 2.05;
	cout << "Preis: " << preis << " Euro" << endl;
	cout << "preisReferenzDrei auch: " << preisReferenzDrei << " Euro" << endl;
	//wow, das Referenzieren ändert auch den Originalwert von preis über Referenzbrücken
	//wow2, die Konstante hat zwar eine Konstante variabel, diese kann aber geändert werden!
}