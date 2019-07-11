#include <iostream>
#include <string.h>
using namespace std;
string helloW = "Hello World!";

string eingabe(string message)
{
	string eingabe;

	do
	{
		cout << message << endl;;
		cin >> eingabe;
	} while (eingabe == "");
	
	return eingabe;
}

int main() 
{
	const int size = helloW.length();;
	//string wort = eingabe("Prüfung ob Wort Isogramm ist: ");
	
	char char_array[size];
	
	//strcpy(char_array, wort);
	cout << endl<< wlength;



}


