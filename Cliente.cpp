#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() const{

	std::cout << "  Nome: " << this->nome << std::endl
		 << "  Endereço: " << this->endereco << std::endl
		 << "  Cidade: " << this->cidade << std::endl
		 << "  Estado: " << this->estado << std::endl
		 << "  CEP: " << this->cep << std::endl;

}