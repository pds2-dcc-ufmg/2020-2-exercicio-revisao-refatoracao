#include <iostream>

#include "Cliente.hpp"
#include "Encomenda.hpp"


void Encomenda::print(){ // Imprime na tela os dados de uma encomenda
    std::cout << "[Remetente]" << std::endl;
    this->remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    this->destinatario.print();
}