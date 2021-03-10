#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;

}

void Cliente::cadastrar(string nome, string _endereco, string cidade, string estado, string _cep){
	NOME = nome;
	endereco = _endereco; 
	CIDADE = cidade; 
	ESTADO = estado; 
	cep = _cep;
}