#include "Encomenda.hpp"

#include <iostream>

Encomenda::Encomenda(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario) {

    this->peso = peso;
    this->custoPorKg = custoPorKg;
    this->remetente = remetente;
    this->destinatario = destinatario;
}

double Encomenda::calculaCustoTotal() {

    double custoTotal = peso * custoPorKg;
    custoTotal += custoTotal * taxaAdicional;
			
    return custoTotal;
}

void Encomenda::imprimeDados() {

    std::cout << "[Remetente]" << std::endl;
    remetente->imprimeDados();

    std::cout << "[Destinatário]" << std::endl;
    destinatario->imprimeDados();
}
