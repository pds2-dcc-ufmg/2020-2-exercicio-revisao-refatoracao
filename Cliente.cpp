#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::printCliente(){
	std::cout << "  Nome: " << getNome() << endl
		 << "  Endereço: " << getEndereco() << endl
		 << "  Cidade: " << getCidade() << endl
		 << "  Estado: " << getEstado() << endl
		 << "  CEP: " << getCep() << endl;
}