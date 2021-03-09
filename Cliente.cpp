#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){
}

Cliente::Cliente(string _nome,string _endereco,string _cidade,string _estado,string _cep){

	this->nome = _nome;
	this->endereco = _endereco;
	this->cidade = _cidade;
	this->estado = _estado;
	this->cep = _cep;

}

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl;
	std::cout << "  Endereço: " << endereco << endl;
	std::cout << "  Cidade: " << cidade << endl;
	std::cout << "  Estado: " << estado << endl;
	std::cout << "  CEP: " << cep << endl;

}