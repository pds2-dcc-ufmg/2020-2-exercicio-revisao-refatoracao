#include "Encomenda.hpp"

#include <iostream>

Encomenda::Encomenda(double peso, double custoEmKg, Cliente *remetente, Cliente *destinatario) {

    this->peso = peso;
    this->custoEmKg = custoEmKg;
    this->remetente = remetente;
    this->destinatario = destinatario;
}

double Encomenda::calculaCustoTotal() {

    double custoTotal = peso * custoEmKg;

    return custoTotal;
}

void Encomenda::imprimeDados() {

    std::cout << "[Remetente]" << std::endl;
    remetente->imprimeDados();

    std::cout << "[Destinatário]" << std::endl;
    destinatario->imprimeDados();
}
