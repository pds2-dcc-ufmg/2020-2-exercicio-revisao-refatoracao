#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << name << endl
		  << "  Endereço: " << adress << endl
		  << "  Cidade: " << city << endl
		  << "  Estado: " << state << endl
		  << "  CEP: " << post_card << endl;

}

Cliente::Cliente(string _name, string _adress, string _city, string _state, string _post_card)
{
	name = _name;
	adress = _adress;
	city = _city;
	state = _state;
	post_card = _post_card;
}

Cliente::Cliente(){}
