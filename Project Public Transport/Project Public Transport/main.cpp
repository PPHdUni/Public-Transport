#include <iostream>
#include "autobus.hpp"

std::vector<Autobus> liste_autobus;

void option_Autobus() {

	std::string option;
	std::vector<std::string> arrets;

	std::string nouv_numero;
	std::string nouv_conducteur;

	while (true) {

		std::cout << "Options\n";
		std::cout << "1. Vérifier les informations des autobus actuels\n";
		std::cout << "2. Ajouter un nouvel autobus\n";
		std::cout << "3. Modifier les informations d'un autobus\n";
		std::cout << "0. Retour\n";
		std::cout << "Veuillez choisir une option (écriver le numéro correspondant à l'option: ";
		std::cin >> option;
		std::cout << "\n\n";

		if (option == "1") { 
			for (int i = 0; i < liste_autobus.size(); i++) {
				std::cout << "Autobus #" << liste_autobus[i].get_numero() << "\n";
				std::cout << "Conducteur: " << liste_autobus[i].get_conducteur() << "\n";
				
				std::cout << "\n";
			}
			continue;
		}
		if (option == "2") {
			std::cout << "Numero du nouvel autobus: ";
			std::getline(std::cin, nouv_numero);
			std::cout << "\n";
			std::cout << "Conducteur du nouvel autobus: ";
			std::getline(std::cin, nouv_conducteur);
			std::cout << "\n";
			Autobus nouv_autobus(std::stoi(nouv_numero), nouv_conducteur);
			liste_autobus.push_back(nouv_autobus);
			std::cout << "Nouvel autobus créé\n\n";
			continue;
		}
		if (option == "3") { break; }
		if (option == "0") { break; }

		std::cout << "Numéro invalide, veuillez réessayer.\n\n";
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
		std::cout << "Veuillez choisir une option (écriver le numéro correspondant à l'option: ";
		std::cin >> option;
		std::cout << "\n\n";

		if (option == "1") { option_Autobus(); continue; }
		if (option == "0") { break; }

		std::cout << "Numéro invalide, veuillez réessayer.\n\n";
	}

}
