#include <iostream>

#include <string>

#include "Cliente.hpp"

void Cliente::imprimirDadosDoCliente(Cliente cliente){

	std::cout << "  Nome: " << nome << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << cidade << std::endl
		 << "  Estado: " << estado << std::endl
		 << "  CEP: " << cep << std::endl;
}