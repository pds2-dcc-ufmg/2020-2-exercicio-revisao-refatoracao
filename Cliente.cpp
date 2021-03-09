#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << _nome << std::endl
		 << "  Endereço: " << _endereco << std::endl
		 << "  Cidade: " << _cidade << std::endl
		 << "  Estado: " << _estado << std::endl
		 << "  CEP: " << _cep << std::endl;

}
