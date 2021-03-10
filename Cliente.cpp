#include <iostream>
#include <string>
#include "Cliente.hpp"
Cliente::Cliente(string nome, string endereco, string estado, string cep){
	_nome=nome;
	_endereco=endereco;
	_estado=estado;
	_cep=cep;
}
void Cliente::print(){

	std::cout << "  Nome: " << this->_nome << endl;
	std::cout << "  Endereço: " << this->_endereco << endl;
	std::cout << "  Cidade: " << this->_cidade << endl;
	std::cout << "  Estado: " << this->_estado << endl;
	std::cout << "  CEP: " << this->_cep << endl;

}