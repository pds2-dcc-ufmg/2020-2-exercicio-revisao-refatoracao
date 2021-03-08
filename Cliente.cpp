#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(){
  this->_nomeCliente = "";
  this->_endereco = "";
  this->_cidade = "";
  this->_estado = "";
  this->_cep = "";
}

Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep){
  this->_nomeCliente = nome;
  this->_endereco = endereco;
  this->_cidade = cidade;
  this->_estado = estado;
  this->_cep = cep;
}

std::string Cliente::getNomeCliente(){
	return this->_nomeCliente;
}

void Cliente::setNomeCliente(std::string nome){
	this->_nomeCliente = nome;
}

std::string Cliente::getEndereco(){
	return this->_endereco;
}

void Cliente::setEndereco(std::string endereco){
	this->_endereco = endereco;
}

std::string Cliente::getCidade(){
	return this->_cidade;
}

void Cliente::setCidade(std::string cidade){
	this->_cidade = cidade;
}

std::string Cliente::getEstado(){
	return this->_estado;
}

void Cliente::setEstado(std::string estado){
	this->_estado = estado;
}

std::string Cliente::getCep(){
	return this->_cep;
}

void Cliente::setCep(std::string cep){
	this->_cep = cep;
}

void Cliente::printDadosCliente(){
	std::cout << "  Nome: " << this->_nomeCliente << std::endl
   << "  Endereço: " << this->_endereco << std::endl
	 << "  Cidade: " << this->_cidade << std::endl
	 << "  Estado: " << this->_estado << std::endl
	 << "  CEP: " << this->_cep << std::endl;
}