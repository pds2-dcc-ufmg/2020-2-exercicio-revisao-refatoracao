#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::imprimir(){//metodo para imprimir os dados do cliente

	std::cout << "  Nome: " << NOME << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << CIDADE << std::endl
		 << "  Estado: " << ESTADO << std::endl
		 << "  CEP: " << cep << std::endl;

}
