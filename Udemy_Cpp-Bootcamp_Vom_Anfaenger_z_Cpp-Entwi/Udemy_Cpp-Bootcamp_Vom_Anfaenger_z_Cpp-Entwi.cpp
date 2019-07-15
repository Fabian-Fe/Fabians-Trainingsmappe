#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>	//to manipulate rand
using namespace std;

void runRandom()
{
	int ende = time(NULL);
	cout << "time Null ist : " << time(NULL)<< endl;
	for (int i = 0; i < ende%255; i++) {
		rand() % 49 + 1;
	}
}

void myRandom(int* lotto) 
{
	for (int i = 0; i < 6; i++)
		lotto[i]= rand()%49+1;
	
}

void main() 
{
	int lotto[6];
	runRandom();
	myRandom(lotto);
	cout << "\n1ste Zahl " << lotto[0] << "\n 2te Zahl " << lotto[1] << "\n 3te Zahl " << lotto[2];


}

	/*
	for (i = 0; i < 6; i++) {
		myRandom(r);
		cout << arrayA[r]<< endl;
	}

	}
	*/



