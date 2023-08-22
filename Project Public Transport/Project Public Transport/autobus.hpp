#include <string>
#include <vector>

class Autobus {

	int numero;
	std::string conducteur;
	std::vector<std::string> arrets;

public:

	Autobus(int nouv_numero, std::string nouv_conducteur);

	int get_numero();

	std::string get_conducteur();

	void set_conducteur(std::string nouv_conducteur);

	std::vector<std::string> get_arrets_station();

	void add_arret_station(std::string nouv_arret);

	void reset_arret_station();

	~Autobus();

};