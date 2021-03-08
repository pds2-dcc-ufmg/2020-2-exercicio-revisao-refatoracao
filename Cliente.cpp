#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	cout << "  Nome: " << _nome << endl
		 << "  Endereço: " << _endereco << endl
		 << "  Cidade: " << _cidade << endl
		 << "  Estado: " << _estado << endl
		 << "  CEP: " << _cep << endl;
}



// Construtor do objeto cliente para facilitar a instanciacao
Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep) {
	_nome = nome;
	_endereco = endereco;
	_cidade = cidade;
	_estado = estado;
	_cep = cep;
}


