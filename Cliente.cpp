#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string nome, string end, string cidade, string estado, string CEP)
{
	this->NOME = nome;
	this->endereco = end;
	this->CIDADE = cidade;
	this->ESTADO = estado;
	this->cep = CEP;
}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;

}