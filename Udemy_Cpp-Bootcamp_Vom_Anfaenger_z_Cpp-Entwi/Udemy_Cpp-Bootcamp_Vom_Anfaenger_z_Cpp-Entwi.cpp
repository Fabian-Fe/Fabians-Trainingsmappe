#include <iostream>
#include <vector>

class Reifen 
{
	double luftdruck=1.6;
	double profil=2.2;
public:
	
	Reifen(double p = 2.2, double l = 1.6) :
		profil(p), luftdruck(l)
	{
		std::cout << "Ein Reifen erstell! Name: "<< this<<std::endl;
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
	
public:
	std::vector<Reifen> ObjReifen;

	Auto(std::string m):
		marke(m)
	{
		std::cout << "Ein Auto erstell! Marke: " << marke << std::endl; //this= speicheradresse, marke = z.B. ford
		this->ObjReifen.resize(4);

	}

	~Auto()
	{
		std::cout << this << " mit marke "<< this->marke <<" wird geloescht!" << std::endl;
	}
	//Reifen ObjReifen[4];				//4Reifen-Objekte als Array klappt
};



void main()
{
	Auto AutoEins("Ford");
	AutoEins.ObjReifen[0].ausgeben();
	AutoEins.ObjReifen[1].ausgeben();
	AutoEins.ObjReifen[2].ausgeben();
	AutoEins.ObjReifen[3].ausgeben();
	//AutoEins.~Auto();	// komischerweise zur Doppelloeschung


	Reifen ExtraReifen(2.4,0);
	ExtraReifen.ausgeben();

	//reifen[0].ausgeben();
}