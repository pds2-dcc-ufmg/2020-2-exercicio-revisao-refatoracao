#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->_Nome << "\n"
		 << "  Endereço: " << this->_Endereco << "\n"
		 << "  Cidade: " << this->_Cidade << "\n"
		 << "  Estado: " << this->_Estado << "\n"
		 << "  CEP: " << this->_Cep << "\n";

}

