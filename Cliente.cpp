#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNome() {
	return this->nome;
}
void Cliente::setNome(string new_nome) {
	this->nome = new_nome;
}
	
string Cliente::getEndereco() {
	return this->endereco;
}
void Cliente::setEndereco(string new_endereco) {
	this->endereco = new_endereco;
}
	
string Cliente::getCidade() {
	return this->cidade;
}
void Cliente::setCidade(string new_cidade) {
	this->cidade = new_cidade;
}
		
string Cliente::getEstado() {
	return this->estado;
}
void Cliente::setEstado(string new_estado) {
	this->estado = new_estado;
}
	
string Cliente::getCep() {
	return this->cep;
}
void Cliente::setCep(string new_cep) {
	this->cep = new_cep;
}

void Cliente::print() {

	std::cout << "  Nome: " << this->nome << endl
		 << "  Endereço: " << this->endereco << endl
		 << "  Cidade: " << this->cidade << endl
		 << "  Estado: " << this->estado << endl
		 << "  CEP: " << this->cep << endl;

}
