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

void Cliente::clientRegister(string nome, string endereco, string cidade, string estado, string cep){
		this->nome = nome;
		this->endereco = endereco;
		this->cidade = cidade;
		this->estado = estado;
		this->cep = cep;
}
