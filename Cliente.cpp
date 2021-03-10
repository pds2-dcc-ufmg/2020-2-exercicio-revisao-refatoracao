#include <iostream>
#include "Cliente.hpp"


// Definição do metodo print da classe Cliente
void Cliente::print() {

	std::cout << "  Nome: "     << this->_nome     << std::endl
		      << "  Endereço: " << this->_endereco << std::endl
		      << "  Cidade: "   << this->_cidade   << std::endl
		      << "  Estado: "   << this->_estado   << std::endl
		      << "  CEP: "      << this->_cep      << std::endl;

}