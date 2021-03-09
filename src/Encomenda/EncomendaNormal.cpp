#include <iostream>
#include "EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(){};

EncomendaNormal::EncomendaNormal(double peso, double custoKG, Cliente remetente, Cliente destinatario)
    : Encomenda(peso, custoKG, remetente, destinatario, 0.0){};

void EncomendaNormal::print_sub()
{
    std::cout << "[Encomenda Normal]" << std::endl;
    this->printPeso();
    this->printCustoKG();
    this->printTotal();
}