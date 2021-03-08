#include <iostream>
#include <string>
#include "Cliente.hpp"

std::string Cliente::get_nome() {
	return this->nome;
}

std::string Cliente::get_endereco() {
	return this->endereco;
}

std::string Cliente::get_cidade() {
	return this->cidade;
}

std::string Cliente::get_estado() {
	return this->estado;
}

std::string Cliente::get_cep() {
	return this->cep;
}

Cliente::set_nome( std::string nome ) {
	this->nome = nome;
}

Cliente::set_endereco( std::string endereco ) {
	this->endereco = endereco;
}

Cliente::set_cidade( std::string cidade ) {
	this->cidade = cidade;
}

Cliente::set_estado( std::string estado ) {
	this->estado = estado;
}

Cliente::set_cep( std::string cep ) {
	this->cep = cep;
}

void Cliente::print() {

	std::cout << "  Nome: " << nome << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << cidade << std::endl
		 << "  Estado: " << estado << std::endl
		 << "  CEP: " << cep << std::endl;

}