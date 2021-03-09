#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente() = default; // construtor padrão

Cliente::Cliente(string name, string address, string city, string state, string zipCode) {
	this->_name = name;
	this->_address = address;
	this->_city = city;
	this->_state = state;
	this->_zipCode = zipCode;
};

void Cliente::print(){
	std::cout 
		<< "  Nome: " << this->_name << endl
		<< "  Endereço: " << this->_address << endl
		<< "  Cidade: " << this->_city << endl
		<< "  Estado: " << this->_state << endl
		<< "  CEP: " << this->_zipCode << endl;
}

