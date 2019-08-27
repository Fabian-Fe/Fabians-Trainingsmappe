#include "Flight.h"
#include "Passenger.h"


//Constructor
Flight::Flight(int n) :number(n)
{
	std::cout << "Flug# " << this->number << " wurde erstellt!\n";
}

//Desctructor
Flight::~Flight()
{
	//std::cout << "Flug# " << number << " wurde geloescht!\n";
}
//Function
void Flight::add_to_flightList(Passenger &Pssngr)
{
	this->passList.push_back(Pssngr);	//C2027	 Verwendung des undefinierten Typs "Passenger"	
}

void Flight::make_seasick(int p)
{
	this->passList.at(p).seasick = true;
	std::cout << "\n Pascal wurde seasick gemacht?: " << this->passList.at(p).seasick << std::endl;

}

void Flight::ausgeben()
{
	std::cout << "Flug# " << number << "s Passagiere: \n";
	for (int i=0; i+1 <= passList.size(); i++)
		std::cout << "\t"<< i <<": "<< passList.at(i).name<<", " << std::endl; 	
}

