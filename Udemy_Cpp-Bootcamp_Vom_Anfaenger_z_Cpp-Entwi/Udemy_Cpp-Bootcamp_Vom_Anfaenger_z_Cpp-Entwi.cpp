#include <iostream>
#include <string.h>
#include <array>
#include <cstdlib> 
#include <ctime> 

using namespace std;

void swap(int &a, int &b)
{
	int swapspace = a;
	a = b;
	b = swapspace;
}


int random(int r)
{
	int ende = time(NULL);
	for (int i = 0; i < ende % 255; i++) 
	{
		return (rand() % (r-1) + 1);
	}
}

void randomizeLotto(int* lotto,int length)
{
	int i;
	for (i = 0; i < length; ++i)
		lotto[i] = random(49);
}

void printStatus(string message,int* lotto)
{
	cout << endl << message;
	int i;
	for (i = 0; i < 10 && lotto[i] != -858993460; i++)
		cout << lotto[i] << ", ";
	cout << endl;
}

int main() 
{
	int lotto[10];
	const int length = (sizeof(lotto) / sizeof(*lotto))-1;
	randomizeLotto(lotto, length);
	printStatus("Lotto UNsortiert: ", lotto);
	int  i;
	for (i = 0; i < length; i++)
	{
		int j;
		for (j = i; j < length; j++)
		{
			if (lotto[i] > lotto[j]){
			//	cout << lotto[i] << " ist groesser als " << lotto[j]
			//	<< " also Tausch!"<< endl;
				swap(lotto[i], lotto[j]);
			}
		}

	}
	printStatus("Lotto sortiert:   ", lotto);	
}
