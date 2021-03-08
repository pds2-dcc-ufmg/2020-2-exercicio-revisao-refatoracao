#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl;
	std::cout << "  Endereço: " << endereco << endl;
	std::cout << "  Cidade: " << cidade << endl;
	std::cout << "  Estado: " << estado << endl;
	std::cout << "  CEP: " << cep << endl;

}
