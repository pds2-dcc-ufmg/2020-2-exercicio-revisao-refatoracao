#include <iostream>
#include <string>
#include "Cliente.hpp"





void Cliente::print(){
	std::cout << "  Nome: " << _nome << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _estado << endl
		 << "  CEP: " << _cep << endl;
}

//getter e setter
string Cliente::getNome(){
	return this->_nome;
}
void Cliente::setNome(string nome){
	this->_nome =nome;
}
string Cliente::getEndereco(){
	return this->_endereco;
}
void Cliente::setEndereco(string endereco){
	this->_endereco = endereco;
}
string Cliente::getCidade(){
	return this->_cidade;
}
void Cliente::setCidade(string cidade){
	this->_cidade = cidade;
}
string Cliente::getEstado(){
	return this->_estado;
}
void Cliente::setEstado(string estado){
	this->_estado = estado;
}
string Cliente::getCep(){
	return this->_cep;
}
void Cliente::setCep(string cep){
	this->_cep = cep;
}