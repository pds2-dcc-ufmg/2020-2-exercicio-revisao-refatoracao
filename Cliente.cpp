#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() const {
	std::cout << "  Nome: " << nome << std::endl
		      << "  Endereço: " << endereco.endereco << std::endl
		      << "  Cidade: " << endereco.cidade << std::endl
		      << "  Estado: " << endereco.estado << std::endl
		      << "  CEP: " << endereco.cep << std::endl;
}
