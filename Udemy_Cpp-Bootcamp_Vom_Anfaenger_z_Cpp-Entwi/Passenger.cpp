#include "Passenger.h"





//Konstruktor
Passenger::Passenger(std::string s) : name(s)
{
	std::cout << "Passagierin " << this->name << " wurde erstellt!\n";
}

//fuegt einen Flug an FlugListe von 1 Passagier dazu
void Passenger::add_to_passengerList(Flight Flght)
{
	FlightList.push_back(Flght);
}


//Destruktor
Passenger::~Passenger()
{
	//std::cout << "Passagierin " << this->name << " wurde geloescht!\n";
}