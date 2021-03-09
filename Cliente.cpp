#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	cout << "  Nome: " << this->_Nome << ""
    << "  Endereço: " << this->_Endereco << endl
    << "  Cidade: " << this->_Cidade << endl
    << "  Estado: " << this->_Estado << endl
    << "  CEP: " << this->_Cep << endl;

}


