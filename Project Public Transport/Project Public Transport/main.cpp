#include <iostream>

void option_Autobus() {

	std::string option;

	while (true) {

		std::cout << "Options\n";
		std::cout << "1. Vérifier les informations des autobus actuels\n";
		std::cout << "2. Ajouter un nouvel autobus\n";
		std::cout << "3. Modifier les informations des autobus actuels\n";
		std::cout << "0. Retour\n";
		std::cout << "Veuillez choisir une option (écriver le numéro correspondant à l'option: ";
		std::cin >> option;
		std::cout << "\n\n";

		if (option == "1") { break; }
		if (option == "2") { break; }
		if (option == "3") { break; }
		if (option == "0") { break; }

		std::cout << "Numéro invalide, veuillez réessayer.\n\n";
	}

}

int main() {

	std::string option;

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
