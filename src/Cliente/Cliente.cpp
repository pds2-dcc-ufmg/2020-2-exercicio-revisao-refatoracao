#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente::Cliente(std::string cep, std::string cidade, std::string endereco, std::string estado, std::string nome)
{
	this->cep = cep;
	this->cidade = cidade;
	this->endereco = endereco;
	this->estado = estado;
	this->nome = nome;
}

void Cliente::Cliente::print()
{
	std::cout << "  Nome: " << nome << std::endl
						<< "  Endereço: " << endereco << std::endl
						<< "  Cidade: " << cidade << std::endl
						<< "  Estado: " << estado << std::endl
						<< "  CEP: " << cep << std::endl;
}