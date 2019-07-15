#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

void myRandom(int& i, int maxValue) {
	srand((unsigned)time(0));
	
	i =(rand() % maxValue);
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
		cout << "\FEHLERHAFTE EINGABE!\n";
		mySpeed(actualSpeed,distanceDriven);
	}

}

void streckenCalc(int actualSpeed,int &distance) {
	distance += actualSpeed;
}

void randomiseSpeedZone(int i) 
{
	int possibleSpeedZones[] = {7,30,50,80,100}

	for (j = 0; j < 16; i++) 
	{
		speedZone[j] = int remap(possibleSpeedZones[i];//bitte map( und remap( pruefen
	}
	
}

int main()
{
	int i=0, actualSpeed=0, clicks=0, distanceDriven=0;
	
	myRandom(i, 5);
	int speedZone[] = { 7,30,30,30,50,50,50,50,50,50,80,80,80,80,100,100 };
	randomiseSpeedZone(i);

	//cout << "DEBUG: speedZone[i] " << speedZone[i];
	myRandom(i, 16);

	while (actualSpeed<=speedZone[i] && distanceDriven<500)
	{
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