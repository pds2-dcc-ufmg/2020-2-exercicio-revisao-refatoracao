#include "Encomenda.hpp"
#include <iostream>

double Encomenda::calcula() const{
    return peso * custo_kg * taxa;
}

void Encomenda::print() const{
    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    destinatario.print();
}