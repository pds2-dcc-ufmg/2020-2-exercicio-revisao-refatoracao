#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << _nome << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _estado << endl
		 << "  CEP: " << _cep << endl;
}

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep)  {
	_nome = nome;
	_endereco = endereco;
	_cidade = cidade;
	_estado = estado;
	_cep = cep;
}	