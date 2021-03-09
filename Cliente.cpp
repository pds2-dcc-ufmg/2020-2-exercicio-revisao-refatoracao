#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string nome, string end, string cidade, string estado, string cep)
{
	this->NOME = nome;
	this->ENDERECO = end;
	this->CIDADE = cidade;
	this->ESTADO = estado;
	this->CEP = cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << CEP << endl;

}