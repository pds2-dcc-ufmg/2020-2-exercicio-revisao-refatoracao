#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << GetNome() << endl
		 << "  Endereço: " << GetEndereco() << endl
		 << "  Cidade: " << GetCidade() << endl
		 << "  Estado: " << GetEstado() << endl
		 << "  CEP: " << GetCep() << endl;
 
}