//#include <iostream>
#include <vector>
#include <cstring>
#include "Flight.h" //includes Passenger.h

int main()
{
	Passenger Pascal("Pascal");
	Passenger Berta("Berta");
	Flight Flug3789(3789);
	
	Flug3789.add_to_flightList(Pascal);
	Pascal.add_to_passengerList(Flug3789);
	Flug3789.add_to_flightList(Berta);
	Berta.add_to_passengerList(Flug3789);
	Flug3789.make_seasick(0);		//mache Person auf vector Passagierliste 0 krank 
	std::cout << "\n Pascal seasick?: "<< Pascal.seasick << std::endl;
	Flug3789.ausgeben(); 
}