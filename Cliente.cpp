#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep){
	this->Nome = _nome;
	this->Endereco = _endereco;
	this->Cidade = _cidade;
	this->Estado = _estado;
	this->CEP = _cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << Nome << endl
		 << "  Endereço: " << Endereco << endl
		 << "  Cidade: " << Cidade << endl
		 << "  Estado: " << Estado << endl
		 << "  CEP: " << CEP << endl;

}