#include <iostream>
#include <string>
#include "Encomenda.hpp"

Encomenda::Encomenda(double peso, double custoKg, Cliente &remetente, Cliente &dest){

	this->_peso = peso;
	this->_custoKg = custoKg;
	this->_remetente = remetente;
	this->_dest = dest;	

}

void Encomenda::print(){

	std::cout << "[Remetente]" << std::endl;
	this->_remetente.print();

	std::cout << "[Destinatário]" << std::endl;
	this->_dest.print();

}

double Encomenda::calcula(){

	double x = this->_peso * this->_custoKg;

	return x;

}
