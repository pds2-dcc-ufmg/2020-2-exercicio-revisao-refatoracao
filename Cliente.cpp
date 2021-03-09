#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print()
{

	cout << "  Nome: " << nome << endl
						<< "  Endereço: " << endereco << endl
						<< "  Cidade: " << cidade << endl
						<< "  Estado: " << estado << endl
						<< "  CEP: " << cep << endl;
}

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep)
  : nome(nome)
  , endereco(endereco)
  , cidade(cidade)
  , estado(estado) {}
