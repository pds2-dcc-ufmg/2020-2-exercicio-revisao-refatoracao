#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(std::string _nome){
	nome = _nome;
}
void Cliente::setDados(std::string _endereco, std::string _cidade, std::string _estado, std::string _cep){
	endereco = _endereco;
	cidade = _cidade;
	estado = _estado;
	cep = _cep;
}
void Cliente::imprimeCliente(){
	std::cout << "  Nome: " << nome << endl
		      << "  Endereço: " << endereco << endl
		      << "  Cidade: " << cidade << endl
		      << "  Estado: " << estado << endl
		      << "  CEP: " << cep << endl;

		};
