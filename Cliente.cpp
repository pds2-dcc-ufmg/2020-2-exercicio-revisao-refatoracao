#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout	<< "  Nome: " << this->getNome() << std::endl
				<< "  Endereço: " << this->getEndereco() << std::endl
		 		<< "  Cidade: " << this->getCidade() << std::endl
		 		<< "  Estado: " << this->getEstado() << std::endl
		 		<< "  CEP: " << this->getCep() << std::endl;

}

Cliente::Cliente(){
	this->NOME = "";
  	this->ENDERECO = "";
  	this->CEP = "";
  	this->ESTADO = "";
  	this->CEP = "";
}

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep){
	this->NOME = nome;
	this->ENDERECO = endereco;
	this->CIDADE = cidade;
	this->ESTADO = estado;
	this->CEP = cep;
}

std::string Cliente::getNome() {
  return this->NOME;
}

std::string Cliente::getEndereco() {
  return this->ENDERECO;
}

std::string Cliente::getCidade() {
  return this->CIDADE;
}

std::string Cliente::getEstado() {
  return this->ESTADO;
}

std::string Cliente::getCep() {
  return this->CEP;
}

void Cliente::setNome(std::string nome) {
  this->NOME = nome;
}

void Cliente::setEndereco(std::string endereco) {
  this->ENDERECO = endereco;
}

void Cliente::setCidade(std::string cidade) {
  this->CIDADE = cidade;
}

void Cliente::setEstado(std::string estado) {
  this->ESTADO = estado;
}

void Cliente::setCep(std::string cep) {
  this->CEP = cep;
}
