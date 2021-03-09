#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() {
	std::cout << "  Nome: " << this->_nome << endl
		<< "  Endereço: " << this->_endereco << endl
		<< "  Cidade: " << this->_cidade << endl
		<< "  Estado: " << this->_estado << endl
		<< "  CEP: " << this->_cep << endl;
}

void Cliente::setNome(std::string nome) {
	this->_nome = nome;
}

void Cliente::setEndereco(std::string endereco) {
	this->_endereco = endereco;	
}

void Cliente::setCidade(std::string cidade) {
	this->_cidade = cidade;
}

void Cliente::setEstado(std::string estado) {
	this->_estado = estado;
}

void Cliente::setCep(std::string cep) {
	this->_cep = cep;
}

std::string Cliente::getNome() {
	return this->_nome;
}

std::string Cliente::getEndereco() {
	return this->_endereco;
}

std::string Cliente::getCidade() {
	return this->_cidade;
}

std::string Cliente::getEstado() {
	return this->_estado;
}

std::string Cliente::getCep() {
	return this->_cep;
}
