#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep){

	_nome = nome;
	_endereco = endereco;
	_cidade = cidade;
	_estado = estado;
	_cep = cep;

}

Cliente::Cliente(){

	std::string S = "aaa";

	_nome = S;
	_endereco = S;
	_cidade = S;
	_estado = S;
	_cep = S;

}

void Cliente::print(){

	std::cout << "  Nome: " << _nome << std::endl
	<< "  Endereço: " << _endereco << std::endl
	<< "  Cidade: " << _cidade << std::endl
	<< "  Estado: " << _estado << std::endl
	<< "  CEP: " << _cep << std::endl;

}
