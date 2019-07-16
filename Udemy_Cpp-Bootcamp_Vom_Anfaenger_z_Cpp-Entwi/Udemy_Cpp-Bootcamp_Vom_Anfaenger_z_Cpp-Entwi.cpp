#include <stdio.h>
#include <iostream>

int max(int a, int b)
{
	return (a > b ? a : b);
}

void main()
{
	int nOne = 5;
	int nTwo = 7;
	std::cout << max(nOne, nTwo) << " is bigger\n";
}