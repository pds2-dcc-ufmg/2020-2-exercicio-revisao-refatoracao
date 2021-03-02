#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->NOME << std::endl
		 << "  Endereço: " << this->ENDERACO << std::endl
		 << "  Cidade: " << this->CIDADE << std::endl
		 << "  Estado: " << this->ESTADO << std::endl
		 << "  CEP: " << this->CEP << std::endl;

}
Cliente::Cliente(std::string nome, std::string end, std::string cidade, std::string estado, std::string cep){
	
	this->NOME=nome;
	this->ENDERECO=end;
	this->CIDADE=cidade;
	this->ESTADO=estado;
	this->CEP=cep;
}
