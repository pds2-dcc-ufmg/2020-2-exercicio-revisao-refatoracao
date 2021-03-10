#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::preencher_cliente(string nome_, string endereco_, string cidade_, string estado_, string cep_){
	NOME = nome_;
	ENDERECO = endereco_;
	CIDADE = cidade_;
	ESTADO = estado_;
	CEP = cep_;
}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << CEP << endl;

}