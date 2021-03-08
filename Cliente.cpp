#include <iostream>
#include <string>
#include "Cliente.hpp"

/**
* Imprime na tela os dados de um cliente cadastrado 
*/
void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
			  << "  Endereço: " << endereco << endl
			  << "  Cidade: " << cidade << endl
			  << "  Estado: " << estado << endl
			  << "  CEP: " << cep << endl;
}

/**
* Construtor de cliente usando parametros.
*/
Cliente::Cliente(string cNome, string cEnd, string cCid, string cEst, string cCep){
	this->nome = cNome;
	this->endereco = cEnd;
	this->cidade = cCid;
	this->estado = cEst;
	this->cep = cCep;
}

Cliente::Cliente(){
}
