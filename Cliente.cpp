#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep){
	
	this->setNome(_nome);
	this->setEndereco(_endereco);
	this->setCidade(_cidade);
	this->setEstado(_estado);
	this->setCep(_cep);
	
}

void Cliente::print(){

	std::cout << "  Nome: " << this->getNome() << endl
		 << "  Endereço: " << this->getEndereco() << endl
		 << "  Cidade: " << this->getCidade() << endl
		 << "  Estado: " << this->getEstado() << endl
		 << "  CEP: " << this->getCep() << endl;

}

void Cliente::setNome(string _nome){

	this->nome=_nome;	
}

void Cliente::setEndereco(string _endereco){

	this->endereco=_endereco;
}

void Cliente::setCidade(string _cidade){

	this->cidade=_cidade;
}

void Cliente::setEstado(string _estado){

	this->estado=_estado;
}

void Cliente::setCep(string _cep){

	this->cep=_cep;
}

string Cliente::getNome(){

	return this->nome;
}

string Cliente::getEndereco(){

	return this->endereco;
}

string Cliente::getCidade(){

	return this->cidade;
}

string Cliente::getEstado(){

	return this->estado;
}

string Cliente::getCep(){

	return this->cep;
}



