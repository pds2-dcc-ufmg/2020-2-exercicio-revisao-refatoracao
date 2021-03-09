#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep) {
	this->nome = _nome;
	this->endereco = _endereco;
	this->cidade = _cidade;
	this->estado = _estado;
	this->cep = _cep;
}


Cliente::Cliente() {
	nome = "";
	endereco = "";
	cidade = "";
	estado = "";
	cep = "";
}


string Cliente::getNome() {
	return this->nome;
}

string Cliente::getEndereco() {
	return this->endereco;
}

string Cliente::getCidade() {
	return this->cidade;
}

string Cliente::getEstado() {
	return this->estado;
}

string Cliente::getCep() {
	return this->cep;
}

void Cliente::printDadosCliente() {

	std::cout 
	     << "  Nome: " << this->getNome() << endl
		 << "  Endereço: " << this->getEndereco() << endl
		 << "  Cidade: " << this->getCidade() << endl
		 << "  Estado: " << this->getEstado() << endl
		 << "  CEP: " << this->getCep() << endl;
}