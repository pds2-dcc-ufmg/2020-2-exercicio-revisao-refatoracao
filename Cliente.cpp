#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep){
	this->nome=nome;
	this->endereco=endereco;
	this->cidade=cidade;
	this->estado=estado;
	this->cep=cep;
}
string Cliente::get_nome(){
	return this->nome;
}
string Cliente::get_endereco(){
	return this->endereco;
}
string Cliente::get_cidade(){
	return this->cidade;
}
string Cliente::get_estado(){
	return this->estado;
}
string Cliente::get_cep(){
	return this->cep;
}
void Cliente::print(){
	cout << "  Nome: " << this->get_nome() << endl
		 << "  Endereço: " << this->get_endereco() << endl
		 << "  Cidade: " << this->get_cidade() << endl
		 << "  Estado: " << this->get_estado() << endl
		 << "  CEP: " << this->get_cep() << endl;
}