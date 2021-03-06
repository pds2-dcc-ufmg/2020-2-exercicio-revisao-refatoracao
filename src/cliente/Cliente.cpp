#include <iostream>
#include <string>
#include "../../include/cliente/Cliente.hpp"

Cliente::Cliente(std::string nomeCliente, std::string enderecoCliente, std::string cidadeCliente, 
				 std::string estadoCliente, std::string cepCliente){

	this->nomeCliente = nomeCliente;
	this->enderecoCliente = enderecoCliente;
	this->cidadeCliente = cidadeCliente;
	this->estadoCliente = estadoCliente;
	this->cepCliente = cepCliente;
}

void Cliente::printCliente(){
	std::cout << "  Nome: " << nomeCliente << std::endl
		 << "  Endereço: " << enderecoCliente << std::endl
		 << "  Cidade: " << cidadeCliente << std::endl
		 << "  Estado: " << estadoCliente << std::endl
		 << "  CEP: " << cepCliente << std::endl;
}
std::string Cliente::getNomeCliente(){
	return this->nomeCliente;
}
std::string Cliente::getEnderecoCliente(){
	return this->enderecoCliente;
}
std::string Cliente::getCidadeCliente(){
	return this->cidadeCliente;
}
std::string Cliente::getEstadoCliente(){
	return this->estadoCliente;
}
std::string Cliente::getCepCliente(){
	return this->cepCliente;
}
void Cliente::setNomeCliente(std::string nomeCliente){
	this->nomeCliente = nomeCliente;
}
void Cliente::setEnderecoCliente(std::string enderecoCliente){
	this->enderecoCliente = enderecoCliente;
}
void Cliente::setCidadeCliente(std::string cidadeCliente){
	this->cidadeCliente = cidadeCliente;
}
void Cliente::setEstadoCliente(std::string estadoCliente){
	this->estadoCliente = estadoCliente;
}
void Cliente::setCepCliente(std::string cepCliente){
	this->cepCliente = cepCliente;
}