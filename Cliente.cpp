#include <iostream>
#include <string>
#include "Cliente.hpp"
Cliente::Cliente(string NOME, string endereco, string CIDADE, string ESTADO, int cep){
  this ->_nomeCliente = NOME;
  this->_enderecoCliente = endereco;
  this->_CIDADECliente = CIDADE;
  this ->_ESTADOCliente = ESTADO;
  this->_cepCliente = cep; 
};
void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;
}
