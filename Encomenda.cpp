#include <iostream>
#include <string>

#include "Encomenda.hpp"

Encomenda::Encomenda(double peso, double custoPorkg, Cliente *remetente, Cliente *destinatario) {
    this->peso = peso;
    this->custoPorkg = custoPorkg;
    this->remetente = remetente;
    this->destinatario = destinatario;
}

double Encomenda::getCustoTotal() {
    return this->custoTotal;
}

void Encomenda::print() {
    std::cout << "[Remetente]" << endl;
    this->remetente->print();
    std::cout << "[Destinatário]" << endl;
    this->destinatario->print();
    this -> _print();
}
