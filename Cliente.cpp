#include <iostream>
#include "Cliente.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string nome, string end, string cidade, string estado, string cep)
{
	this->_nome = nome;
	this->_endereco = end;
	this->_cidade = cidade;
	this->_estado = estado;
	this->_cep = cep;
}

void Cliente::print()
{
	std::cout << "  Nome: " << _nome << endl
			  << "  Endereço: " << _endereco << endl
			  << "  Cidade: " << _cidade << endl
			  << "  Estado: " << _estado << endl
			  << "  CEP: " << _cep << endl;
}