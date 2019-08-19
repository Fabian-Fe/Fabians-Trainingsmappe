#include <iostream>
#include <vector>
#include <cstring>


class Flight
{
public:
	Flight(int numb); //FlugNr.
	void ausgeben();
	friend class Passenger; 
	std::vector<Passenger> passList;	//Liste fuer Passagiere auf dem Flug
	~Flight();
private:
	int number;
};


//Constructor
Flight::Flight(int n):number(n) 
{
	std::cout << "Flug# "<< number <<" wurde erstellt!\n";
	//C26495	Die Variable "Flight::uebergabe" ist nicht initialisiert.
	//Eine Membervariable muss immer initialisiert werden(type.6)
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
	std::cout << passList.at(0).name << std::endl; 	//C2027	 Verwendung des undefinierten Typs "Passenger"	
}

class Passenger
{
public:
	Passenger(std::string name);			
	//Flight PassengersFlight;		//soll spaeter Liste mit mehreren Fluegen sein
	void add_2flight(Flight& flght);//fuegt einen Passagiers an PassagierListe von 1 Flug dazu
	friend class Flight;
	friend void Flight::ausgeben();
	~Passenger();


//private:				
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

void Passenger::add_2flight(Flight& flght)		//
{
	flght.passList.push_back(*this);
}

int main()
{
	Flight Flug3789(3789);
	Passenger Pascal("Pascal");
	Pascal.add_2flight(Flug3789);
	std::cout << Flug3789.passList.at(0).name;
	Flug3789.ausgeben(); 
}