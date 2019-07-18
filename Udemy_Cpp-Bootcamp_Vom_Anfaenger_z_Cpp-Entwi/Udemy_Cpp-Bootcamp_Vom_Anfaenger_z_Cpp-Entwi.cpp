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
	srand(time(NULL));
	return((rand() % (r - 1)) + 1);

}

void randomizeLotto(int* lotto)
{
	int i, ziehungen = 5; //random(5)
	for (i = 0; i < ziehungen; ++i)
		lotto[i] = random(49);
}


int main() 
{
	int lotto[6];
	randomizeLotto(lotto);
	const int length = (sizeof(lotto) / sizeof(*lotto))-1;
	int posListe[length];
	//outer loop
	int i;
	int smallest = lotto[0];
	for (i = 0; i < length; i++)
	{
		int j;
		for (j = i; j < length; j++)
		{
			if (lotto[i] > lotto[j]){
				int smallest = i;			
				cout << lotto[i] << " ist groesser als " << lotto[j]
				<< " also Tausch!"<< endl;
				swap(lotto[i], lotto[j]);
			}
		}

	}
	cout << endl << "Lotto sortiert: ";
	for (i = 0; i < length; i++)
		cout << lotto[i] << ", ";
	cout << endl;
	
}
