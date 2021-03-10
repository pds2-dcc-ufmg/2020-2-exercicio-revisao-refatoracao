#include "Encomenda.hpp"
#include <iostream>

void Encomenda::print() {
    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    destinatario.print();
}