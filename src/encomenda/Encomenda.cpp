#include <iostream>
#include <string>
#include "Encomenda.hpp"

#include "../cliente/Cliente.hpp"

Encomenda::Encomenda() {
  this->peso = 0.0;
  this->custoKg = 0.0;
}

Encomenda::Encomenda(double peso, double custoKg, Cliente remetente, Cliente dest) {
  this->peso = peso;
  this->custoKg = custoKg;
  this->remetente = remetente;
  this->dest = dest;
}

void Encomenda::print() {
	std::cout << "[Remetente]" << endl;
	remetente.print();
	std::cout << "[Destinatário]" << endl;
	dest.print();
}

void Encomenda::setPeso(double peso) {
  this->peso = peso;
}

void Encomenda::setCustoKG(double custo) {
  this->custoKg = custo;
}

void Encomenda::setRemetente(Cliente remetente) {
  this->remetente = remetente;
}

void Encomenda::setDest(Cliente dest) {
  this->dest = dest;
}

void Encomenda::setT(double t) {
  this->t = t;
}

double Encomenda::getCustoKG() {
  return this->custoKg;
}

double Encomenda::getT() {
  return this->t;
}

double Encomenda::getPeso() {
  return this->peso;
}

Cliente Encomenda::getRemetente() {
  return this->remetente;
}

Cliente Encomenda::getDest() {
  return this->dest;
}