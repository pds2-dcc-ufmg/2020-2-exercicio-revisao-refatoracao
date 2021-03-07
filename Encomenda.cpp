#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Encomenda.hpp"

Encomenda::Encomenda(){
  this->_peso = 0.0;
  this->_custoKg = 0.0;
  this->_custoTotal = 0.0;
  this->_destinatario = Cliente();
  this->_remetente = Cliente();
}

Encomenda::Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario){
  this->_peso = peso;
  this->_custoKg = custoKg;
  this->_remetente = remetente;
  this->_destinatario = destinatario;
}

double Encomenda::getPeso(){
	return this->_peso;
}

void Encomenda::setPeso(double peso){
	this->_peso = peso;
}

double Encomenda::getCustoKg(){
	return this->_custoKg;
}

void Encomenda::setCustoKg(double custoKg){
	this->_custoKg = custoKg;
}

double Encomenda::getCustoTotal(){
	return this->_custoTotal;
}

void Encomenda::setCustoTotal(double custoTotal){
	this->_custoTotal = custoTotal;
}

Cliente Encomenda::getRemetente(){
	return this->_remetente;
}

void Encomenda::setRemetente(Cliente remetente){
	this->_remetente = remetente;
}

Cliente Encomenda::getDestinatario(){
	return this->_destinatario;
}

void Encomenda::setDestinatario(Cliente destinatario){
	this->_destinatario = destinatario;
}