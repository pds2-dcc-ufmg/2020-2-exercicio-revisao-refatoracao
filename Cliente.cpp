#include <iostream>
#include <string>
#include "Cliente.hpp"


void Cliente :: printarCliente(){

	std::cout << " Nome: " << nome << endl
	 << "  Endereco: " <<endereco<< endl
	 << "  Cidade: " << cidade << endl
	 << "  Estado: " << estado << endl
	 << "  CEP: " << cep << endl;

}



string Cliente :: getNome(){
	return this-> nome;
}
			
string Cliente :: getEndereco(){
	return this-> endereco;
}

string Cliente :: getCidade(){
	return this-> cidade;
}

string Cliente :: getEstado(){
	return this-> estado;
}

string Cliente :: getCep(){
	return this-> cep;
}

		
void Cliente::setNome(string _NOME){
	this-> nome = _NOME;
}

void Cliente::setEndereco(string _endereco){
	this->endereco= _endereco;

}

void Cliente::setCidade(string _CIDADE){
	this->cidade=_CIDADE;
}

void Cliente::setEstado(string _ESTADO){
	this->estado=_ESTADO;
}

void Cliente::setCep(string _cep){
	this-> cep= _cep;
}
