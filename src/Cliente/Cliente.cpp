#include <iostream>
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