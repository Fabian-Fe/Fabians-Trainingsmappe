#include <iostream>
#include <string.h>
using namespace std;

void swap(int* a, int* b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
 
int main() 
{
	int a, b;
	a = 1;
	b = 2;
	swap(a,b);
	cout << "\n a= " << a << " b=" << b<<"\n";


	
}		
