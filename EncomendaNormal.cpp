#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaNormal.hpp"


EncomendaNormal::EncomendaNormal(double p, double c, Cliente r, Cliente d): peso(p), custoKg(c),                                            remetente(r), dest(d){}

void print() override{

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << peso << endl
        << "  Custo por kg: " << custoKg << endl
        << "  Custo total: " << t << endl;

}

double calcula() override{

    double x = peso * custoKg;

    return x;
}
