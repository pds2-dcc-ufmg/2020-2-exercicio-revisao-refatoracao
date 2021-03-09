#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNome() { return this->Nome; }

string Cliente::getEndereco() { return this->Endereco; }

string Cliente::getCidade() { return this->Cidade; }

string Cliente::getEstado() { return this->Estado; }

string Cliente::getCEP() { return this->CEP; }

void Cliente::print(){

	std::cout << "  Nome: " << this->getNome() << endl
		      << "  Endereço: " << this->getEndereco() << endl
		      << "  Cidade: " << this->getCidade() << endl
		      << "  Estado: " << this->getEstado() << endl
		      << "  CEP: " << this->getCEP() << endl;

}