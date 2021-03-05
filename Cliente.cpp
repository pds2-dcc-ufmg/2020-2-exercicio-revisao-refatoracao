#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep){
	this->_nome = nome;
	this->_endereco = endereco;
	this->_cidade = cidade;
	this->_estado = estado;
	this->_cep = cep;
};

void Cliente::print_cliente(){

	std::cout << "  Nome: " << _nome << std::endl;
	std::cout << "  Endereço: " << _endereco << std::endl;
	std::cout << "  Cidade: " << _cidade << std::endl;
	std::cout << "  Estado: " << _estado << std::endl;
	std::cout << "  CEP: " << _cep << std::endl;

}