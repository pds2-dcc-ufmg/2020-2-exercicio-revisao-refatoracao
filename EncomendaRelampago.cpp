#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago(double peso, double custo, double taxa, Cliente _remetente, Cliente destinatario)
{
    this->PESO = peso;
    this->CUSTOkg = custo;
    this->taxaAdicional = taxa;
    this->remetente = _remetente;
    this->dest = destinatario;
}

double EncomendaRelampago::calcula()
{

    double x = PESO * CUSTOkg;
    x += x * taxaAdicional;

    return x;
}

void EncomendaRelampago::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << PESO << std::endl
              << "  Custo por kg: " << CUSTOkg << std::endl
              << "  Taxa adicional: " << taxaAdicional << std::endl
              << "  Custo total: " << taxaAdicional << std::endl;
}