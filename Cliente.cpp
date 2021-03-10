#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep){
		this->cep = cep;
		this->estado = estado;
		this->cidade = cidade;
		this->endereco = endereco;
		this->nome = nome;
}

void Cliente::print(){

	std::cout << "  Nome: " << nome << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << cidade << std::endl
		 << "  Estado: " << estado << std::endl
		 << "  CEP: " << cep << std::endl;

}
