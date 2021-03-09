#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente (string nome, string endereco, string cidade, string estado, string cep) {
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_estado = estado;
	this->_cep = cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << this->_nome << endl
		 << "  Endereço: " << this->_endereco << endl
		 << "  Cidade: " << this->_cidade << endl
		 << "  Estado: " << this->_estado << endl
		 << "  CEP: " << this->_cep << endl;

}
