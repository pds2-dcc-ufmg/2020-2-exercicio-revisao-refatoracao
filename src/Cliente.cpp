#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() {
	std::cout	<< "  Nome: " << NOME << std::endl
				<< "  Endereço: " << endereco << std::endl
				<< "  Cidade: " << cidade << std::endl
				<< "  Estado: " << estado << std::endl
				<< "  CEP: " << cep << std::endl;
}