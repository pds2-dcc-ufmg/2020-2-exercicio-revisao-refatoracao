#include <iostream>
#include <string>
#include "Cliente.hpp"
using namespace std;

void Cliente::print(){
	cout << "  Nome: " << this->_nome << endl
	     << "  Endereço: " << this->_endereco << endl
	     << "  Cidade: " << this->_cidade << endl
	     << "  Estado: " << this->_estado << endl
	     << "  CEP: " << this->_cep << endl;
}

void Cliente::setNome(string nome){
	this->_nome = nome;
}

void Cliente::setEndereco(string endereco){
	this->_endereco = endereco;
}

void Cliente::setCidade(string cidade){
	this->_cidade = cidade;
}

void Cliente::setEstado(string estado){
	this->_estado = estado;
}

void Cliente::setCEP(string cep){
	this->_cep = cep;
}

string Cliente::getNome() {
    return this->_nome;
}

string Cliente::getEndereco() {
    return this->_endereco;
}

string Cliente::getCidade() {
    return this->_cidade;
}

string Cliente::getEstado() {
    return this->_estado;
}

string Cliente::getCEP() {
    return this->_cep;
}
