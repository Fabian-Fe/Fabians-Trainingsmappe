#include <iostream>


class Reifen 
{
	double luftdruck;
	double profil;
public:
	Reifen(double p = 2.2, double l = 1.6)
	{
		profil = p;
		luftdruck = l;
	}
	void ausgeben();
	void set_profil(double);
};

void Reifen::ausgeben() 
{
	std::cout << "Luftdruck: " << this->luftdruck<< " bar || Profilstaerke: "<<this->profil<< " mm\n";
}

void Reifen::set_profil(double newprofil)
{
	this->profil = newprofil;
}

class Auto
{
	std::string marke = "NoBrand";
	Reifen reifen[4];
public:
	Auto(std::string m)
	{		
		marke=m;
	}

};

void main()
{
	Auto autoEins("Ford");
	reifen[3].ausgeben();
}