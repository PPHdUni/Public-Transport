#include <iostream>
#include "autobus.hpp"

std::vector<Autobus> liste_autobus;

void modifie_Autobus() {

	std::string option_autobus;
	std::string option_info;
	std::vector<std::string> arrets;
	bool match_autobus;

	while (true) {
		match_autobus = false;

		std::cout << "Options\n";
		for (int i = 1; i <= liste_autobus.size(); i++) {
			std::cout << i << ". \n";
			std::cout << "Autobus #" << liste_autobus[i-1].get_numero() << "\n";
			std::cout << "Conducteur: " << liste_autobus[i-1].get_conducteur() << "\n";

			std::cout << "\n";
		}
		std::cout << "0. Retour\n";
		std::cin >> option_autobus;
		std::cout << "\n\n";

		for (int i = 1; i <= liste_autobus.size(); i++) {
			if (option_autobus == std::to_string(i)) {
				match_autobus = true;
				while (true) {

					std::cout << "Options\n";
					std::cout << "1. Changer le conducteur\n";
					std::cout << "2. Ajouter un arret de station\n";
					std::cout << "3. Reinitialiser la liste des arrets de station\n";
					std::cout << "0. Quitter\n";
					std::cout << "Veuillez choisir l'information a modifier (ecriver le numero correspondant a l'option: ";
					std::cin >> option_info;
					std::cout << "\n\n";

					if (option_info == "1") {
						std::string nouv_conducteur;
						std::cout << "Nouveau conducteur de l'autobus: ";
						std::getline(std::cin >> std::ws, nouv_conducteur);
						liste_autobus[i - 1].set_conducteur(nouv_conducteur);
						option_info = "0";
					}
					if (option_info == "2") {
						std::string nouv_arrêt;
						std::cout << "Nouvel arret de station: ";
						std::getline(std::cin >> std::ws, nouv_arrêt);
						liste_autobus[i - 1].add_arret_station(nouv_arrêt);
						option_info = "0";
					}
					if (option_info == "3") {
						liste_autobus[i - 1].reset_arret_station();
						option_info = "0";
					}
					if (option_info == "0") { break; }

					std::cout << "Numero invalide, veuillez reessayer.\n\n";
				}
			}
		}
		if (match_autobus) { continue; }
		if (option_autobus == "0") { break; }
		std::cout << "Numero invalide, veuillez reessayer.\n\n";
	}

}

void option_Autobus() {

	std::string option;

	std::string nouv_numero;
	std::string nouv_conducteur;
	std::vector<std::string> arrêts_station;

	while (true) {

		std::cout << "Options\n";
		std::cout << "1. Verifier les informations des autobus actuels\n";
		std::cout << "2. Ajouter un nouvel autobus\n";
		std::cout << "3. Modifier les informations d'un autobus\n";
		std::cout << "0. Retour\n";
		std::cout << "Veuillez choisir une option (ecriver le numero correspondant à l'option: ";
		std::cin >> option;
		std::cout << "\n\n";

		if (option == "1") { 
			for (int i = 0; i < liste_autobus.size(); i++) {
				std::cout << "Autobus #" << liste_autobus[i].get_numero() << "\n";
				std::cout << "Conducteur: " << liste_autobus[i].get_conducteur() << "\n";

				std::cout << "Arrets d'autobus: ";
				arrêts_station = liste_autobus[i].get_arrets_station();
				for (int j = 0; j < arrêts_station.size(); j++) { std::cout << arrêts_station[j] << "; "; }
				
				std::cout << "\n\n";
			}
			continue;
		}
		if (option == "2") {
			std::cout << "Numero du nouvel autobus: ";
			std::getline(std::cin >> std::ws, nouv_numero);
			std::cout << "Conducteur du nouvel autobus: ";
			std::getline(std::cin >> std::ws, nouv_conducteur);
			Autobus nouv_autobus(std::stoi(nouv_numero), nouv_conducteur);
			liste_autobus.push_back(nouv_autobus);
			std::cout << "\nNouvel autobus cree\n\n";
			continue;
		}
		if (option == "3") {
			modifie_Autobus();
			continue;
		}
		if (option == "0") { break; }

		std::cout << "Numero invalide, veuillez reessayer.\n\n";
	}

}

int main() {

	std::string option;

	Autobus nouv_autobus1(1, "Jean Mauricier");
	liste_autobus.push_back(nouv_autobus1);

	Autobus nouv_autobus2(2, "Pierre Lachaine");
	liste_autobus.push_back(nouv_autobus2);

	while (true) {

		std::cout << "Options\n";
		std::cout << "1. Autobus\n";
		std::cout << "0. Quitter\n";
		std::cout << "Veuillez choisir une option (ecriver le numero correspondant à l'option: ";
		std::cin >> option;
		std::cout << "\n\n";

		if (option == "1") { option_Autobus(); continue; }
		if (option == "0") { break; }

		std::cout << "Numero invalide, veuillez reessayer.\n\n";
	}

}
