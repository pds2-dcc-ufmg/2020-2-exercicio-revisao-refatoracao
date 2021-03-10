#include "Encomenda.hpp"

#include <iostream>

Encomenda::Encomenda(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario) {

    this->peso = peso;
    this->custoPorKg = custoPorKg;
    this->remetente = remetente;
    this->destinatario = destinatario;
}

double Encomenda::calculaCustoTotal() {
    return peso * custoPorKg * taxa;
}


void Encomenda::print(){
    std::cout << "[Remetente]" << endl;
    remetente->print();
    std::cout << "[Destinatário]" << endl;
    destinatario->print();
}