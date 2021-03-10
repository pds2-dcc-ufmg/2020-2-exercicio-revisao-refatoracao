#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep) {
	this->nome = _nome;
	this->endereco = _endereco;
	this->cidade = _cidade;
	this->estado = _estado;
	this->cep = _cep;
}

void Cliente::print(){
	std::cout << "  Nome: " << nome << std::endl
	          << "  Endereço: " << endereco << std::endl
		  << "  Cidade: " << cidade << std::endl
		  << "  Estado: " << estado << std::endl
		  << "  CEP: " << cep << std::endl;
}
