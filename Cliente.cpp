#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << getNome() << std::endl
		 << "  Endereço: " << getEndereco() << std::endl
		 << "  Cidade: " << getCidade() << std::endl
		 << "  Estado: " << getEstado() << std::endl
		 << "  CEP: " << getCep() << std::endl;

}