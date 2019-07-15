#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>	//to manipulate rand
using namespace std;

int main()
{
	srand(time(nullptr)); // use current time as seed for random generator
	int random_variable = rand();
	cout << "Random value on [0 " << RAND_MAX << "]: "
		<< random_variable << '\n';

	// roll a 6-sided die 20 times
	for (int n = 0; n != 20; ++n) {
		int x = 7;
		while (x > 6)
			x = 1 + rand() / ((RAND_MAX + 1u) / 6);  // Note: 1+rand()%6 is biased
		cout << x << ' ';
	}
}


/*
void myRandom(int &r) 
{
	srand(time(NULL));
	r = rand(); // rand() return a number between ​0​ and RAND_MAX
	//cout << random_number;
}

int main() 
{
	int r;
	int arrayA[] = { 0,1,2,3,4,5 };
	int i;
	for (i = 0; i < 6; i++) {
		myRandom(r);
		cout << arrayA[r]<< endl;
	}
	
}*/


