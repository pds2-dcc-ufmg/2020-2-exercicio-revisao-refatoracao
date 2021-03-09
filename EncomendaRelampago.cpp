#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#include "EncomendaRelampago.hpp"


EncomendaRelampago::EncomendaRelampago(double p, double c, Cliente r, Cliente d): peso(p), custoKg(c),                                            remetente(r), dest(d){}

void print() override{

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << peso << endl
        << "  Custo por kg: " << custoKg << endl
        << "  Taxa adicional: " << TAXARELAMPAGO << endl
        << "  Custo total: " << t << endl;

}

double calcula() override{

    double x = peso * custoKg;
    x += x * TAXARELAMPAGO;
    
    return x;
}
