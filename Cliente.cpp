#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print() {

	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;

}

// Getters:
string Cliente::getNome() {
	return nome;
}

string Cliente::getEndereco() {
	return endereco;
}

string Cliente::getCidade() {
	return cidade;
}

string Cliente::getEstado() {
	return estado;
}

string Cliente::getCep() {
	return cep;
}

// Setters:

void Cliente::setNome(string nome) {
	this->nome = nome;
}

void Cliente::setEndereco(string endereco) {
	this->nome = endereco;
}

void Cliente::setCidade(string cidade) {
	this->cidade = cidade;
}

void Cliente::getEstado(string estado) {
	this->estado = estado;
}

void Cliente::getCep(string cep) {
	this->cep = cep;
}
