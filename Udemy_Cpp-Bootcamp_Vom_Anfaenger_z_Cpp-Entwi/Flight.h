#pragma once
#include <vector>
#include "Passenger.h" //#include <iostream>

class Flight
{
public:
	Flight(int numb); //FlugNr.
	friend class Passenger;
	std::vector<Passenger> passList;		//Liste fuer Passagiere auf dem Flug
	void add_to_flightList(Passenger& Pssngr);//fuegt einen Passagiers an PassagierListe von 1 Flug dazu
	void ausgeben();
	void make_seasick(int p);
	~Flight();

private:
	int number;
};


