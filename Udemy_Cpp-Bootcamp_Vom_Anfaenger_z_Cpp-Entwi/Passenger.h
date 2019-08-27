#pragma once
#include <vector>
#include <iostream>
#include "Flight.h"


class Passenger
{
public:
	Passenger(std::string s);
	friend class Flight;
	std::vector<Flight> FlightList;
	void add_to_passengerList(Flight Flght);//fuegt einen Flug an FlugListe von 1 Passagier dazu
	bool seasick = 0;

	~Passenger();


private:				
	std::string name;

};


