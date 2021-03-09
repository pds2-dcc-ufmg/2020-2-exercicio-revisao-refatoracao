#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->nome << std::endl
		 << "  Endereço: " << this->endereco << std::endl
		 << "  Cidade: " << this->cidade << std::endl
		 << "  Estado: " << this->estado << std::endl
		 << "  CEP: " << this->cep << std::endl;

}

Cliente::Cliente(std::string _nome,std::string _endereco,std::string _cidade,std::string _estado,std::string _cep){
	this->nome = _nome;
	this->endereco = _endereco;
	this->cidade = _cidade;
	this->estado = _estado;
	this->cep = _cep;
}