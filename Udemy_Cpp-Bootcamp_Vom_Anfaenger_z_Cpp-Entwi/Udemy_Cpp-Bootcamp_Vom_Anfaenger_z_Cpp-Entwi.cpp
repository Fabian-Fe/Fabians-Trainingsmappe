#include <iostream>
#include <vector>
#include <cstring>

class Flight
{
public:
	Flight(int numb); //FlugNr.
	~Flight();
	void ausgeben();
	friend class Passenger; 
	std::vector<Passenger> passList;	//Liste fuer Passagiere auf dem Flug
	
private:
	int number;
};


//Constructor
Flight::Flight(int n):number(n)
{
	std::cout << "Flug# "<< number <<" wurde erstellt!\n";
}
//Desctructor
Flight::~Flight()
{
	std::cout << "Flug# " << number << " wurde geloescht!\n";
}

//Function
void Flight::ausgeben() 
{
	std::cout << "Flug# " << number << "s Passagiere: ";
	//for (const Passenger &p : passList)

	for (int p = 0; p < 1; p++)			//passList.length() doesnt work for size
		std::cout << passList.at(p) << std::endl; 
}

class Passenger
{
public:
	Passenger(std::string name);			
	~Passenger();
	//Flight PassengersFlight;		//soll spaeter Liste mit Fluegen sein
	void add_2flight(Flight flght); //fuegt einen Flug zu des Passagiers Liste an Fluegen dazu
	friend class Flight;

private:
	std::string name;
};

//Konstruktor
Passenger::Passenger(std::string n) :name(n)
{
	std::cout << "Passagierin " << name <<" wurde erstellt!\n";
}

//Destruktor
Passenger::~Passenger()
{
	std::cout << "Passagierin " << name << " wurde geloescht!\n";
}	   

void Passenger::add_2flight(Flight flght)		//
{
	flght.passList.push_back(*this);
}

int main()
{
	Flight Flug3789(3789);
	Passenger Pascal("Pascal");
	Pascal.add_2flight(Flug3789);
	Flug3789.ausgeben();

}