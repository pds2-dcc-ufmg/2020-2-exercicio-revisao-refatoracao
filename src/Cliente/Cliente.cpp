#include <iostream>
#include <string>
#include "Cliente.hpp"


void Cliente::print(){

	std::cout << "  Nome: " << _nome << std::endl;
	std::cout << "  Endereço: " << _endereco << std::endl;
	std::cout << "  Cidade: " << _cidade << std::endl;
	std::cout << "  Estado: " << _estado << std::endl;
	std::cout << "  CEP: " << _cep << std::endl;

}