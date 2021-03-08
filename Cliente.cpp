#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep){
	this->nome = _nome;
	this->endereco = _endereco;
	this->cidade = _cidade;
	this->estado = _estado;
	this->cep = _cep;
}


void Cliente::printDados(){

	std::cout << "  Nome: " << this->nome << endl
		 << "  Endereço: " << this->endereco << endl
		 << "  Cidade: " << this->cidade << endl
		 << "  Estado: " << this->estado << endl
		 << "  CEP: " << this->cep << endl;

}