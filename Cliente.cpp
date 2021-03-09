#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << NOME << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << cep << endl;

}

/*void Cliente::setNome(string Nom){
	this->NOME = Nom;
}
void Cliente::setEndereco(string end){
	this->endereco = end;
}
void Cliente::setCidade(string Cid){
	this->CIDADE = Cid;
}
void Cliente::setEstado(string Est){
	this->ESTADO = Est;
}
void Cliente::setCep(string CEP){
	this->cep = CEP;
}*/
