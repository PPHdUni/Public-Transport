#include <iostream>
#include "autobus.hpp"

Autobus::Autobus(int nouv_numero, std::string nouv_conducteur)
	: numero(nouv_numero), conducteur(nouv_conducteur) {}

int Autobus::get_numero() { return numero; }

std::string Autobus::get_conducteur() { return conducteur; }

void Autobus::set_conducteur(std::string nouv_conducteur) { conducteur = nouv_conducteur; }

std::vector<std::string> Autobus::get_arrets_station() { return arrets; }

void Autobus::add_arret_station(std::string nouv_arret) { arrets.push_back(nouv_arret); }

void Autobus::reset_arret_station() {

	arrets.clear();
	arrets.shrink_to_fit();

}

Autobus::~Autobus() { reset_arret_station(); }
