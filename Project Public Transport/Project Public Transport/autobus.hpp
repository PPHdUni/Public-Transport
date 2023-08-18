#include <string>
#include <vector>

class Autobus {

	int number;
	std::string driver;
	std::vector<std::string> stop;

public:

	Autobus(int new_number, std::string new_driver);

	int get_numero();

	int get_conducteur();

	void set_conducteur(std::string new_driver);

	std::vector<std::string> get_station_stop();

	void add_station_stop(std::string new_stop);

	void reset_station_stop();

};