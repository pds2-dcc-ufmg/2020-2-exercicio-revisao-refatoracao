#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->getNome() << endl
		 << "  Endereço: " << this->getEndereco() << endl
		 << "  Cidade: " << this->getCidade() << endl
		 << "  Estado: " << this->getEstado() << endl
		 << "  CEP: " << this->getCep() << endl;

}
void Cliente::getNome(){
	return nome;
	
}
void Cliente::getEndereco(){
	return endereco;
		
}
void Cliente::getCidade(){
 	return cidade;
		
}
void Cliente::getEstado(){
	return estado;
		
}
void Cliente::getCep(){
	return cep;
		
}
