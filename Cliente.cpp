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
string Cliente::getNome(){
	return nome;
	
}
string Cliente::getEndereco(){
	return endereco;
		
}
string Cliente::getCidade(){
 	return cidade;
		
}
string Cliente::getEstado(){
	return estado;
		
}
string Cliente::getCep(){
	return cep;
		
}
