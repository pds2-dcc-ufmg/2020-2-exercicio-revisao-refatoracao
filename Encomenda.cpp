#include "Encomenda.hpp"
#include <iostream>

void Encomenda::print() const {
    // printa remetente
    std::cout << "[Remetente]" << std::endl;
    remetente.print();

    // printa destinatário
    std::cout << "[Destinatário]" << std::endl;
    destinatario.print();
}

double Encomenda::calcula() const {
    return peso * custoPorKg;
}
