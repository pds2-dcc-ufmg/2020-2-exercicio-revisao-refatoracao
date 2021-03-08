#include <iostream>
#include "Cliente.hpp"

void Cliente::print() {

	std::cout << "  Nome: " << this->getNome() << std::endl
		 	<< "  Endereço: " << this->getEndereco() << std::endl
		    << "  Cidade: " << this->getCidade() << std::endl
		    << "  Estado: " << this->getEstado() << std::endl
		    << "  CEP: " << this->getCEP() << std::endl;

}