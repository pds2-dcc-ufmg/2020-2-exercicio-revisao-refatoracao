#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome; std::string endereco; std::string cidade; std::string estado; std::string cep){
	this-> _nome = nome;
	this-> _endereco = endereco;
	this-> _cidade = cidade;
	this-> _estado = estado;
	this-> _cep = cep;
}

void Cliente::printCliente(){

	std::cout << " Nome: " << this-> _nome << std::endl;
	std::cout << " Endereço: " << this-> _endereco << std::endl;
	std::cout << " Cidade: " << this-> _cidade << std::endl;
	std::cout << " Estado: " << this-> _estado << std::endl;
	std::cout << " CEP: " << this->_cep << std::endl;
}
