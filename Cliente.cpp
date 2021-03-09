#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << CIDADE << std::endl
		 << "  Estado: " << ESTADO << std::endl
		 << "  CEP: " << cep << std::endl;

}
Cliente::Cliente(std::string NOME_, std::string endereco_, std::string CIDADE_, std::string ESTADO_, std::string cep_)
{
	this->NOME=NOME_;
	this->endereco=endereco_;
	this->CIDADE=CIDADE_;
	this->ESTADO=ESTADO_;
	this->cep=cep_; 
}	
