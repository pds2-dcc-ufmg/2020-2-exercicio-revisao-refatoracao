#include <iostream>
#include <string>
#include "Cliente.hpp"
using namespace std;

void Cliente::print(){

	std::cout << "  Nome: " << this->NOME << endl
		 << "  Endereço: " << this->ENDERACO << endl
		 << "  Cidade: " << this->CIDADE << endl
		 << "  Estado: " << this->ESTADO << endl
		 << "  CEP: " << this->CEP << endl;

}
Cliente::Cliente(string nome, string end, string cidade, string estado, string cep){
	
	this->NOME=nome;
	this->ENDERECO=end;
	this->CIDADE=cidade;
	this->ESTADO=estado;
	this->CEP=cep;
}
