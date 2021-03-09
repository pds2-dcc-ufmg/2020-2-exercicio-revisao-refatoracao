#include <iostream>
#include <string>
#include "Encomenda.hpp"

Encomenda::Encomenda (double peso, double custo_kg, Cliente remetente, Cliente destinatario) {
  this->_peso = peso;
  this->_custo_kg = custo_kg;
  this->_remetente = remetente;
	this->_destinatario = destinatario;
}

void Encomenda::print(){
	std::cout << "[Remetente]" << endl;
	this->_remetente.print();
	std::cout << "[Destinatário]" << endl;
	this->_destinatario.print();
}
