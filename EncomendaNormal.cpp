#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(double peso, double custo, Cliente _remetente, Cliente destinatario)
{
    this->PESO = peso;
    this->CUSTOkg = custo;
    this->remetente = _remetente;
    this->dest = destinatario;
}
double EncomendaNormal::calcula()
{
    double x = PESO * CUSTOkg;

    return x;
}

void EncomendaNormal::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << PESO << std::endl
              << "  Custo por kg: " << CUSTOkg << std::endl
              << "  Custo total: " << taxaAdicional << std::endl;
}