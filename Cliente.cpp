#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep)
{
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->estado = estado;
	this->cep = cep;
}

void Cliente::print()
{

	std::cout << "  Nome: " << nome << std::endl
			  << "  Endereço: " << endereco << std::endl
			  << "  Cidade: " << cidade << std::endl
			  << "  Estado: " << estado << std::endl
			  << "  CEP: " << cep << std::endl;
}

std::string Cliente::getCep()
{
	return this->cep;
}

std::string Cliente::getCidade()
{
	return this->cidade;
}

std::string Cliente::getEndereco()
{
	return this->endereco;
}

std::string Cliente::getEstado()
{
	return this->estado;
}

std::string Cliente::getNome()
{
	return this->nome;
}
