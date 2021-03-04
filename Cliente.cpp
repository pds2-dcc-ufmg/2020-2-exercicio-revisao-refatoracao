#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco, string cidade, 
	string estado, string cep) {
	this->_nome = nome; 
	this->_endereco = endereco; 
	this->_cidade = cidade; 
	this->_estado = estado; 
	this->_cep = cep; 
}

void Cliente::print(){
	std::cout << "  Nome: " << this->_nome << std::endl
		<< "  Endereço: " << this->_endereco << std::endl
		<< "  Cidade: " << this->_cidade << std::endl
		<< "  Estado: " << this->_estado << std::endl
		<< "  CEP: " << this->_cep << std::endl;
}