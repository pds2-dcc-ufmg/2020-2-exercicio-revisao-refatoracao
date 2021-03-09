#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;

}

std::string Cliente::getNome() const { return nome; }

std::string Cliente::getEndereco() const { return endereco; }

std::string Cliente::getCidade() const { return cidade; }

std::string Cliente::getEstado() const { return estado; }

std::string Cliente::getCep() const { return cep; }

void Cliente::setNome(std::string _nome) { nome = _nome; }

void Cliente::setEndereco(std::string _endereco) { endereco = _endereco; }

void Cliente::setCidade(std::string _cidade) { cidade = _cidade; }

void Cliente::setEstado(std::string _estado) { estado = _estado; }

void Cliente::setCep(std::string _cep) { cep = _cep; }
