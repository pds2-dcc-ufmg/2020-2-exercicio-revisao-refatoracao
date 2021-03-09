#include <iostream>
#include <string>
#include "Cliente.hpp"


string Cliente::getNome(){
    return this->Nome;
}
void Cliente::setNome(string nome){
    this->Nome = nome;
}
string Cliente::getEndereco(){
    return this->Endereco;
}
void Cliente::setEndereco(string endereco){
    this->Endereco = endereco;
}
string Cliente::getCidade(){
    return this->Cidade;
}
void Cliente::setCidade(string cidade){
    this->Cidade = cidade;
}
string Cliente::getEstado(){
 return this->Estado;
}
void Cliente::setEstado(string estado){
    this->Estado = estado;
}
string Cliente::getCep(){
    return this->Cep;
}
void Cliente::setCep(string cep){
    this->Cep = cep;
}
void Cliente::printCliente(){
	std::cout << "  Nome: " << this->getNome() << endl
		 << "  Endereço: " << this->getEndereco() << endl
		 << "  Cidade: " <<this->getCidade() << endl
		 << "  Estado: " << this->getEstado() << endl
		 << "  CEP: " << this->getCep() << endl;
}
