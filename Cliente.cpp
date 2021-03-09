#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(string name){
	NOME = name;
}

void Cliente::setEndereço(string address){
	endereco = address;
}

void Cliente::setCidade(string city){
	CIDADE = city;
}

void Cliente::setEstado(string state){
	ESTADO = state;
}

void Cliente::setcep(string PO){
	cep = PO;
}

string Cliente::getNome(){
	return NOME;
}

string Cliente::getEndereco(){
	return endereco;
}

string Cliente::getCidade(){
	return CIDADE;
}

string Cliente::getEstado(){
	return ESTADO;
}

string Cliente::getCep(){
	return cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;

}