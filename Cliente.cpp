#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print_cliente(){

	std::cout << "  Nome: " << this->_nome << std::endl
		 << "  Endereço: " << this->_endereco << std::endl
		 << "  Cidade: " << this->_cidade << std::endl
		 << "  Estado: " << this->_estado << std::endl
		 << "  CEP: " << this->_cep << std::endl;

}

