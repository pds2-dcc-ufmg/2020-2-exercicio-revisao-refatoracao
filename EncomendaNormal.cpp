#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaNormal.hpp"


void print() override{

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << PESO << endl
        << "  Custo por kg: " << CUSTOkg << endl
        << "  Custo total: " << T << endl;

}

double calcula() override{

    double x = PESO * CUSTOkg;

    return x;
}
