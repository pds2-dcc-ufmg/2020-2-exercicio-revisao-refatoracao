#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep){
	this-> nome = nome;
	this-> endereco = endereco;
	this-> cidade = cidade;
	this-> estado = estado;
	this-> cep = cep;
}
string Cliente::getNome(){
	return this-> nome;
}

string Cliente::getEndereco(){
	return this-> endereco;
}

string Cliente::getCidade(){
	return this-> cidade;
}

string Cliente::getEstado(){
	return this->estado;
}

string Cliente::getCep(){
	return this->cep;
}

void Cliente::print(){
	cout << "  Nome: " << this-> nome << endl
		 << "  Endereço: " << this-> endereco << endl
		 << "  Cidade: " << this-> cidade << endl
		 << "  Estado: " << this-> estado << endl
		 << "  CEP: " << this-> cep << endl;

}