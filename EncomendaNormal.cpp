#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaNormal.hpp"




void print(){

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
        << "  Custo por kg: " << custoKg << std::endl
        << "  Custo total: " << t << std::endl;

}

double EncomendaNormal::calcula() const{

    double x = peso * custoKg;

    return x;
}

#endif
