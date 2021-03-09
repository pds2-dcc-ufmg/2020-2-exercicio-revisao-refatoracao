#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string a,string b, string c, string d, string e){
	this->nome = a;
	this->endereco = b;
	this->cidade = c;
	this->estado = d;
	this->cep = e;
}
Cliente::Cliente(){
	this->nome = "";
	this->endereco = "";
	this->cidade = "";
	this->estado = "";
	this->cep = "";
}

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;

}
