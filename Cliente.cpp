#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "  Nome: " 	<< this->nome 	  << endl
		 	  << "  Endereço: " << this->endereco << endl
		 	  << "  Cidade: " 	<< this->cidade   << endl
		 	  << "  Estado: "	<< this->estado   << endl
		 	  << "  CEP: " 		<< this->cep 	  << endl;
}

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep){
	this->nome 		= nome;
	this->endereco 	= endereco;
	this->cidade 	= cidade;
	this->estado 	= estado;
	this->cep 		= cep;
}