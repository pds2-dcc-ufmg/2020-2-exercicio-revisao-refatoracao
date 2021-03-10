#include <iostream>
#include <string>
#include "Cliente.hpp"

//Implementação do construtor da classe Cliente...
Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep){

	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->estado = estado;
	this->cep = cep;
}

//Implementação da função que imprime na tela os dados de um cliente cadastrado...
void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		<< "  Endereço: " << endereco << endl
		<< "  Cidade: " << cidade << endl
		<< "  Estado: " << estado << endl
		<< "  CEP: " << cep << endl;

}