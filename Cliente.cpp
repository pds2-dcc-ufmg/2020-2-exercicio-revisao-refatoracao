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
