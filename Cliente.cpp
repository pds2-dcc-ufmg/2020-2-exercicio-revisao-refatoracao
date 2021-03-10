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
void Cliente::setNome(string _S){
	this->nome=_S;
	
}
void Cliente::setEndereco(string _S){
	this->endereco=_S;
	
}
void Cliente::setCidade(string _S){
	this->cidade=_S;
	
}
void Cliente::setEstado(string _S){
	this->estado=_S;
	
}
void Cliente::setCep(string _S){
	this->cep=_S;
	
}
