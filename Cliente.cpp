#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){
	this->NOME = "";
	this->endereco = "";
	this->CIDADE = "";
	this->ESTADO = "";
	this->cep = "";
}

Cliente::Cliente(string CliNome, string CliEndereco, string CliCidade, string CliEstado, string CliCep){
	this->NOME = CliNome;
	this->endereco = CliEndereco;
	this->CIDADE = CliCidade;
	this->ESTADO = CliEstado;
	this->cep = CliCep;
}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;

}