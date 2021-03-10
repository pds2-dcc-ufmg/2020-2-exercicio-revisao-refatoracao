#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, Endereco *endereco) {
	this->nome = nome;
	this->endereco = endereco;
}

Cliente::~Cliente() {
	//delete this->endereco;
}

void Cliente::print(){
	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco->getLogradouro() << endl
		 << "  Cidade: " << endereco->getCidade() << endl
		 << "  Estado: " << endereco->getEstado() << endl
		 << "  CEP: " << endereco->getCep() << endl;

}
