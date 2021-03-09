#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print()
{

	std::cout << "  Nome: " << NOME << endl
			  << "  Endereço: " << endereco << endl
			  << "  Cidade: " << CIDADE << endl
			  << "  Estado: " << ESTADO << endl
			  << "  CEP: " << cep << endl;
}

void Cliente::cadastro(string NOME, string endereco, string CIDADE,
					   string ESTADO, string cep)
{
	this->NOME = NOME;
	this->endereco = endereco;
	this->CIDADE = CIDADE;
	this->ESTADO = ESTADO;
	this->cep = cep;
}