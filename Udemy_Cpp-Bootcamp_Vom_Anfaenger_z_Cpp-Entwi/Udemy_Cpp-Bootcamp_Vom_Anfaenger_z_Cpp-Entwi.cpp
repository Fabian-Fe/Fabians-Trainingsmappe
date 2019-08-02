#include <iostream>
#include <string>
using namespace std;

class Kfz
{
public:
	Kfz(int speed, int passagiere, double abgase, string bezeichnung)
	{
		this->speed = speed;
		this->passagiere = passagiere;
		this->abgase = abgase;
		this->bezeichnung = bezeichnung;
	}
	void ausgeben();
private:
	int speed, passagiere;
	double abgase = 2.500;
	string bezeichnung;
};

void Kfz::ausgeben()
{
	cout <<  "Gefaehrt: " << this->bezeichnung << " ||Speed: "<< this->speed << " ||CO2 in kg/l: " << this->abgase <<  endl;
}

class Auto : public Kfz
{
	double capacity;
	//Circle(long a, long b, long c) : GeoObjekt(a,b), d(c) {}
public:
	Auto(const int& s, const int& p, const double& a, const string& b, double capacity) : Kfz(s, p, a, b)
	{
		this->capacity = capacity;
	}
	~Auto()
	{
		
	}
};

class Lkw : public Kfz
{
	double capacity;

public:
	Lkw(const int& s, const int& p, const double& a, const string& b, double capacity) : Kfz(s, p, a, b)
	{
		this->capacity = capacity;
	}
	~Lkw()
	{}
};

void main()
{

	Auto grauerSmart(170, 4, 2500.90, "alter smart",980);
	//grauerSmart.capacity = 980;
	//grauerSmart.werteZuweisen(170,4,2500.90, "alter smart");
	
	grauerSmart.ausgeben();

	Auto roterFerrari(230, 2, 3090.25, "Mein Schneller Flitzer",420);
	//roterFerrari.capacity = 420;
	//roterFerrari.werteZuweisen(230, 2, 3090.25, "Mein Schneller Flitzer");
	roterFerrari.ausgeben();
	

	//Lkw berta(110, 2, 3255.50, "Unser alter Truck!", 14000);
	Lkw* berta = new Lkw(110, 2, 3255.50, "Unser alter Truck!", 14000);
	Lkw* certa = new Lkw(11, 5, 2255.50, "Unser neuer Truck!", 15000);
	//berta.capacity = 14500;
	//berta.werteZuweisen(110, 2, 3255.50, "Unser alter Truck!");
	berta[0].ausgeben();
	certa[0].ausgeben();

	delete berta;
	



}
