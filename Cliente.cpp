#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl  
		 << "  CEP: " << cep << endl;

}

Cliente::Cliente (string nome, string endereco, string cidade, string estado, string cep) {
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->estado = estado;
	this->cep = cep;
}

string Cliente::get_endereco () {
	return endereco;
}

string Cliente::get_cidade () {
	return cidade;
}

string Cliente::get_estado () {
	return estado;
}

string Cliente::get_nome () {
	return nome;
}

string Cliente::get_cep() {
	return cep;
}

void Cliente::set_endereco (string endereco) {
	this->endereco = endereco;
}

void Cliente::set_cidade (string cidade) {
	this->cidade = cidade;
}

void Cliente::set_estado (string estado) {
	this->estado = estado;
}
void Cliente::set_cep (string cep) {
	this->cep = cep;
}


