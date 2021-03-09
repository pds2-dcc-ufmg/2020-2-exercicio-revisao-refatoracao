#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaRelampago.hpp"

void print() override{

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << PESO << endl
        << "  Custo por kg: " << CUSTOkg << endl
        << "  Taxa adicional: " << TAXARELAMPAGO << endl
        << "  Custo total: " << T << endl;

}

double calcula() override{

    double x = PESO * CUSTOkg;
    x += x * TAXARELAMPAGO;
    
    return x;
}
