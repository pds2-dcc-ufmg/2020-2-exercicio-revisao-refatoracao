
#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << this->getNome() << std::endl;
	std::cout << "  Endereço: " << this->getEndereco() << std::endl;
	std::cout << "  Cidade: " << this->getCidade() << std::endl;
	std::cout << "  Estado: " << this->getEstado() << std::endl;
	std::cout << "  CEP: " << this->getCEP() << std::endl;

}

void Cliente::setNome(std::string nome){
	this->nome = nome;
}

void Cliente::setEndereco(std::string endereco){
	this->endereco = endereco;
}

void Cliente::setCidade(std::string cidade){
	this->cidade = cidade;
}

void Cliente::setEstado(std::string estado){
	this->estado = estado;
}

void Cliente::setCEP(std::string cep){
	this->cep = cep;
}

std::string Cliente::getNome(){
	return this->nome;
}

std::string Cliente::getEndereco(){
	return this->endereco;
}

std::string Cliente::getCidade(){
	return this->cidade;
}

std::string Cliente::getEstado(){
	return this->estado;
}

std::string Cliente::getCEP(){
	return cep;
}
