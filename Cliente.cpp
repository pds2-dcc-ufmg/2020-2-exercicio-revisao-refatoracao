#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << Nome << std::endl << "  Endereço: " << Endereco << std::endl << "  Cidade: " << Cidade << std::endl
	<< "  Estado: " << Estado << std::endl << "  CEP: " << Cep << std::endl;	 
		 
}

Cliente::Cliente(std::string Nome_in, std::string Endereco_in, std::string Cidade_in, std::string Estado_in, std::string Cep_in):
 	Nome(Nome_in), Endereco(Endereco_in), Cidade(Cidade_in), Estado(Estado_in), Cep(Cep_in) {}
