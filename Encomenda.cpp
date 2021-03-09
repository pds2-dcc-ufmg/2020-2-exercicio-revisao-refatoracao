#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::print() {
    std::cout << "[Remetente]" << endl;
    this->_remetente.print();
    std::cout << "[Destinatário]" << endl;
    this->_destinatario.print();
}

void Encomenda::setPeso(double peso) {
    this->_peso = peso;
}

void Encomenda::setCustoKg(double custoKg) {
    this->_custoKg = custoKg;
}

void Encomenda::setTotal(double total) {
    this->_total = total;
}

void Encomenda::setRemet(Cliente remetente) {
    this->_remetente = remetente;
    
void Encomenda::setDest(Cliente destinatario) {
    this->_destinatario = destinatario;
}

double Encomenda::getPeso() {
    return this->_peso;
}

double Encomenda::getCustoKg() {
    return this->_custoKg;
}

double Encomenda::getTotal() {
    return this->_total;
}

Cliente Encomenda::getRemet() {
    return this->_remetente;
}
   
Cliente Encomenda::getDest() {
    return this->_destinatario;
}
