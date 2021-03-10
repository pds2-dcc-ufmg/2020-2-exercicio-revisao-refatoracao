#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(string nome){
    this->_nome_cliente = nome;
}
void Cliente::setEndereco(string endereco){
    this->_endereco_cliente = endereco;
}
void Cliente::setCidade(string cidade){
    this->_cidade_cliente = cidade;
}
void Cliente::setEstado(string estado){
    this->_estado_cliente = estado;
}
void Cliente::setCep(string cep){
    this->_cep_cliente = cep;
}

string Cliente::getNome(){
    return this->_nome_cliente;
}
string Cliente::getEndereco(){
    return this->_endereco_cliente;
}
string Cliente::getCidade(){
    return this->_cidade_cliente;
}
string Cliente::getEstado(){
    return this->_estado_cliente;
}
string Cliente::getCep(){
    return this->_cep_cliente;
}

void Cliente::print(){

	std::cout << "  Nome: " << getNome() << endl
		 << "  Endereço: " << getEndereco() << endl
		 << "  Cidade: " << getCidade() << endl
		 << "  Estado: " << getEstado() << endl
		 << "  CEP: " << getCep() << endl;

}
