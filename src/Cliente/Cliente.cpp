#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print()
{
	this->printNome();
	this->printEndereco();
	this->printCidade();
	this->printEstado();
	this->printCep();
}

void Cliente::printNome()
{
	std::cout << "  Nome: " << this->_nome << std::endl;
}

void Cliente::printEndereco()
{
	std::cout << "  Endereço: " << this->_endereco << std::endl;
}

void Cliente::printCidade()
{
	std::cout << "  Cidade: " << this->_cidade << std::endl;
}

void Cliente::printEstado()
{
	std::cout << "  Estado: " << this->_estado << std::endl;
}

void Cliente::printCep()
{
	std::cout << "  CEP: " << this->_cep << std::endl;
}

void Cliente::setNome(std::string Nome)
{
	this->_nome = Nome;
}

void Cliente::setEndereco(std::string Endereco)
{
	this->_endereco = Endereco;
}

void Cliente::setCidade(std::string Cidade)
{
	this->_cidade = Cidade;
}

void Cliente::setEstado(std::string Estado)
{
	this->_estado = Estado;
}

void Cliente::setCep(std::string Cep)
{
	this->_cep = Cep;
}