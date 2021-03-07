#include <iostream>
#include "Encomenda.hpp"

void Encomenda ::print()
{
    std::cout << "[Remetente]" << std::endl;
    getRemetente()->print();
    std::cout << "[Destinatário]" << std::endl;
    getRemetente()->print();
}

double Encomenda ::calcularTotal()
{
    return getPeso() * getCustoKg();
}