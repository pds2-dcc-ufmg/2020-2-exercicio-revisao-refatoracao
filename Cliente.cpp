#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string a,std::string b, std::string c, std::string d, std::string e){
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

	std::cout << "  Nome: " << this->nome << std::endl
		 << "  Endereço: " << this->endereco << std::endl
		 << "  Cidade: " << this->cidade << std::endl
		 << "  Estado: " << this->estado << std::endl
		 << "  CEP: " << this->cep << std::endl;

}
