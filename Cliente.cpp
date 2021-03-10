#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(string nome,string endereco,string cidade,string estado,string cep){
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->estado = estado;
	this->cep = cep;
	
}


	
void Cliente::print(){

	cout 	<< "  Endereço: " << nome << endl;
	cout 	<< "  Endereço: " << endereco << endl;
	cout 	<< "  Cidade: " << cidade << endl;
	cout 	<< "  Estado: " << estado << endl;
	cout 	<< "  CEP: " << cep << endl;

}

string Cliente:: get_nome(){
	return this->nome;
}
string Cliente:: get_endereco(){
	return this->endereco;
}
string Cliente:: get_cidade(){
	return this->cidade;
}
string Cliente:: get_estado(){
	return this->estado;
}
string Cliente:: get_cep(){
	return this->cep;
}

