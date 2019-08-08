#include <iostream>
#include <string>
using namespace std;

class Kfz
{
public: 
	//Polymorphie quasi Überladung von Konstruktoren in klassen
	
	//regulärer Konstruktor
	Kfz(int speed, int passagiere, double abgase, string bezeichnung)
	{
		this->speed = speed; //this-> wegen Pointer Zuweisung (siehe Children)
		(*this).passagiere = passagiere; //alternative zu ->
		this->abgase = abgase;
		this->bezeichnung = bezeichnung;
	}

	//folgender Konstruktor benutzt Memberlisten-Initialisierer:
	//		(obsolet, weil identisch in Argument-Anzahl und -Typen)
	Kfz(int s, int p, double a, string b)
		: speed(s), passagiere(p), abgase(a), bezeichnung(b) // member init list
	{}

	//folgender Konstruktor lässt .bezeichnung weg, dieses Attribut
	//hat aber einen default-Wert (s.u.)
	//außerdem kann es ebenfalls mit 2 Attributen ausgeführt werden, denn
	//abgase hat default-Wert im Konstruktor-Argument
	Kfz(int speed, int passagiere, double abgase = 2150)//Nur 3 Arg
	{
		(*this).speed = speed;
		this->passagiere = passagiere;
		this->abgase = abgase;

	}

	//Konstruktor mit nur einem Argument
	explicit Kfz(int i) : speed(i), passagiere(i) // member init list
	{}				//ein i wird an beliebig viele Attribute weitergegeben


	//public funktionen können  aufKlassen-eigene private attribute 
	//(und protected-Attribute von Überklassen) zugreifen
	void ausgeben();

	//getter-Methode
	int getSpeed()
	{
		return this->speed;
	}
	//setter-Methode
	void setSpeed(int speednew)
	{
		this->speed = speednew;
	}

private:	//können NICHT mit .attribut angesprochen werden
	int speed, passagiere;
	double abgase = 2.500;
	string bezeichnung="Default-BeZeichnung";
protected:
	//Attribute hierin können nicht in main, jedoch von innerhalb der
	//Subklassen angesprochen werden
};

void Kfz::ausgeben()
{
	cout <<  "Gefaehrt: " << this->bezeichnung << " ||Speed: "<< this->speed << " ||CO2 in kg/l: " << this->abgase <<  endl;
}

class Auto : public Kfz
{
protected:	
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


	Auto grauerSmart(170, 4, 2500.90 , "alter smart",980);
	grauerSmart.ausgeben();

	Auto roterFerrari(230, 2, 3090.25, "Mein Schneller Flitzer",420);
	roterFerrari.ausgeben();
	

	Lkw* berta = new Lkw(110, 2, 3255.50, "Unser alter Truck!", 14000);
	Lkw* certa = new Lkw(11, 5, 2255.50, "Unser neuer Truck!", 15000);

	berta[0].ausgeben();
	certa[0].ausgeben();

	Kfz eigenbau(130, 1);//abgase nimmt Default-Wert aus Konstruktor-parameter
					//bezeichnung nimmt aus defauklt attribut
	eigenbau.ausgeben();

	Kfz eigenBauBus(70); //greift auf letzten Konstruktor mit nur 1 Argument
	eigenBauBus.ausgeben();//70 wird an speed und passagiere weitergegeben



	delete berta;
	



}
