#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->Nome << std::endl
		 << "  Endereço: " << this->Endereco << std::endl
		 << "  Cidade: " << this->Cidade << std::endl
		 << "  Estado: " << this->Estado << std::endl
		 << "  CEP: " << this->CEP << std::endl;

}
void Cliente::set(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep){
	
	this->Nome=nome;
	this->Estado=estado;
	this->Cidade=cidade;
	this->Endereco=endereco;
	this->CEP=cep;
}
