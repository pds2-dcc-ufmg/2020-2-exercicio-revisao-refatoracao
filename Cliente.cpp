#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->get_NOME() << endl
		 << "  Endereço: " << this->get_ENDERECO()<< endl
		 << "  Cidade: " << this->get_CIDADE() << endl
		 << "  Estado: " << this->get_ESTADO() << endl
		 << "  CEP: " << this->get_CEP() << endl;

}