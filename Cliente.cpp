#include <iostream>
#include <string>
#include "Cliente.hpp"
using namespace std;
using std::string;

Cliente::Cliente (string _nome, string _endereco, string _cidade, string _estado, string _cep)
{
	this->nome = _nome;
    	this->endereco = _endereco;
    	this->cidade = _cidade;
    	this->estado = _estado;
    	this->cep = _cep;
}

void Cliente::print()
{
	cout 	<< "  Nome: " << nome << endl
		<< "  Endereço: " << endereco << endl
		<< "  Cidade: " << cidade << endl
		<< "  Estado: " << estado << endl
		<< "  CEP: " << cep << endl;
}
