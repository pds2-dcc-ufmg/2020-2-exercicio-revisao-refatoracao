#include <iostream>
#include "Cliente.hpp"

void Cliente::set_nome(std::string _nome) {
	nome = _nome;
}

std::string Cliente::get_nome() {
	return nome;
}

void Cliente::set_endereco(std::string _endereco) {
	endereco = _endereco;
}

std::string Cliente::get_endereco() {
	return endereco;
}

void Cliente::set_cidade(std::string _cidade) {
	cidade = _cidade;
}

std::string Cliente::get_cidade() {
	return cidade;
}

void Cliente::set_estado(std::string _estado) {
	estado = _estado;
}

std::string Cliente::get_estado() {
	return estado;
}

void Cliente::set_cep(std::string _cep) {
	cep = _cep;
}

std::string Cliente::get_cep() {
	return cep;
}

void Cliente::print() {
	std::cout << "  Nome: " << nome << std::endl
			  << "  Endereço: " << endereco << std::endl
			  << "  Cidade: " << cidade << std::endl
			  << "  Estado: " << estado << std::endl
			  << "  CEP: " << cep << std::endl;
}