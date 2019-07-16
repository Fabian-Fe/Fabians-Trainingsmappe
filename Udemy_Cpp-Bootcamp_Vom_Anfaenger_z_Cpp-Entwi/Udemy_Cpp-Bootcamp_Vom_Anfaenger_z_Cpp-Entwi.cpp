#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <cstdlib>

using namespace std;


void myRandom(int &i, int maxValue) 
{

	int ende = time(NULL);
	int j;
	for (int j = 0; j < ende % 255; j++) 
		i= (rand() % maxValue);
}



void mySpeed(int &actualSpeed,int  distanceDriven)
{
	static int zaehl = 0;
	string eingabe;
	cout << "GESCHWINDIGKEIT:     " << actualSpeed << "       Strecke zu fahren: "<< distanceDriven <<endl;
	cout << "\n waehlen sie + oder - zum be- oder entschleunigen oder 0\n";
	cin >> eingabe;
	if (eingabe=="+") 
	{
		actualSpeed += 10;
	}
	else if (eingabe=="-"&& actualSpeed>=10) 
	{
		actualSpeed -= 10;
	}
	else if (eingabe == "0") {		
	}
	else {
		cout << "\nFEHLERHAFTE EINGABE!\n";
		mySpeed(actualSpeed,distanceDriven);
	}

}

void streckenCalc(int actualSpeed,int &distance) {
	distance += actualSpeed;
}

void randomiseSpeedZone(int* speedZone, int &i)
{
	int possibleSpeedZones[] = { 7,30,50,80,100 };
	int j;
	for (j = 0; j < 16; j++) 
	{
		myRandom(i,5);						
		speedZone[j] = possibleSpeedZones[i];		 
	}
	
}

int main()
{
	int i=0, actualSpeed=0, clicks=0, distanceDriven=0;
	
	int speedZone[16] ;
	randomiseSpeedZone(speedZone,i);		//fill 16 slot array with random speedzones
	int j;
	for (j = 0; j < 16; j++)
		cout << speedZone[j] << endl;

	myRandom(i, 16);

	while (actualSpeed<=speedZone[i] && distanceDriven<500)
	{
		if (clicks %300 <0)
			nextSignAhead()
		mySpeed(actualSpeed,distanceDriven);
		streckenCalc(actualSpeed, distanceDriven);
		clicks++;
	}
	
	if (distanceDriven>=500)
	{
		cout << "\nSie sind in " << clicks << " Zeiteinheiten angekommen";
	}else{
		cout << "Sie sind " << actualSpeed - speedZone[i] << " zu schnell!";
		cout << "\n Bitte zahlen Sie " << (actualSpeed - speedZone[i]) * 3 << " als Strafe!";
	}
			
}