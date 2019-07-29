#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;



void main() 
{
	string firstname;
	printf("Type your first name: ");
	cin>> firstname;
	for (int x = firstname.length()-1; x >= 0; x--)
		cout<<firstname.at(x);
}
