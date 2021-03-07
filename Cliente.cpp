#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() const{

	std::cout << "  Nome: " << _nome << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _estado << endl
		 << "  CEP: " << _cep << endl;

}