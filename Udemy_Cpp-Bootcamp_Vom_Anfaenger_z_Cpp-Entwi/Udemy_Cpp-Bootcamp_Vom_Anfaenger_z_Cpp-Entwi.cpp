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
void doppelte_raus(int* lotto)
{
	int i;
	for (i=0;i<5;++i){
		while(lotto[i]== lotto[i+1]|| lotto[i] == lotto[i+2] || lotto[i] == lotto[i+3] || lotto[i] == lotto[i+4] || lotto[i] == lotto[i+5])
		{
			cout << "while(lotto[" << i << "] gleich!";
			lotto[i]= rand() % (49 - 1) + 1;
		}
	}
}
//generiert irgendwie randSeed zu anfang
void runRandom()
{
	int ende = time(NULL);
	for (int i = 0; i < ende % 255; i++) 
		rand();
}				
//füllt lotto[10] mit 10 zufälligen zahlen zw. 1 u 49
void randomizeLotto(int* lotto,int length,int r=49)
{
	int i;
	for (i = 0; i < length; ++i)
		lotto[i] = rand() % (r-1) + 1;
}
void printStatus(string message,int* lotto)
{
	cout << endl << message;
	int i;
	for (i = 0; i < 10 && lotto[i] != -858993460; i++)
		cout << lotto[i] << ", ";
	cout << endl;
}
void sizeComparison(int* lotto, int length)
{
	int  i;
	for (i = 0; i < length; i++)
	{
		int j;
		for (j = i; j < length; j++)
		{
			if (lotto[i] > lotto[j]) {
				//	cout << lotto[i] << " ist groesser als " << lotto[j]
				//	<< " also Tausch!"<< endl;
				swap(lotto[i], lotto[j]);
			}
		}

	}
}
int main() 
{
	runRandom();
	int lotto[6];
	const int length = (sizeof(lotto) / sizeof(*lotto));
	randomizeLotto(lotto, length);
	doppelte_raus(lotto);
	printStatus("Lotto UNsortiert: ", lotto);
	sizeComparison(lotto, length);
	printStatus("Lotto sortiert:   ", lotto);	
}
