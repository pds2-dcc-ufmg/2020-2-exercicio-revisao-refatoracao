#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

Encomenda::Encomenda () {
    
    this->peso = 0.0;
    this->custoKg = 0.0;
    this->total = 0.0;
}

Encomenda::Encomenda(double peso, double custoKg, double total, Cliente remetente, Cliente destinatario){
    this->peso = peso;
    this->custoKg = custoKg;
    this->total = total;
    this->remetente = remetente;
    this->destinatario = destinatario;
}

void Encomenda::print(){

	std::cout << "[Remetente]" << std::endl;
	this->remetente.print();
	std::cout << "[Destinatário]" << std::endl;
	this->destinatario.print();
}

double Encomenda::getPeso() {
    return this->peso;
}

double Encomenda::getCustoKg(){
    return this->custoKg;
}

double Encomenda::getTotal{
    return this->total;
}

Cliente Encomenda::getRemetente() {
    return this->remetente;
}

Cliente Encomenda::getDestinatario() {
  return this->destinatario;
}

void Encomenda::setPeso(double peso) {
  this->peso = peso;
}

void Encomenda::setCustoKg(double custoKg) {
  this->custoKg = custoKg;
}

void Encomenda::setRemetente(Cliente remetente) {
  this->remetente = remetente;
}

void Encomenda::setDestinatario(Cliente destinatario) {
  this->destinatario = destinatario;
}

void Encomenda::setTotal(double total) {
  this->total = total;
}