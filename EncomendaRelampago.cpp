#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"


void EncomendaRelampago::print(){

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << getPeso() << endl
        << "  Custo por kg: " << getCusto() << endl
        << "  Taxa adicional: " << taxa << endl
        << "  Custo total: " << getTotal() << endl;

}

double EncomendaRelampago::calculaTotal(){

    double custo = getPeso() * getCusto();
    custo += custo * taxa;
    this->setTotal(custo);
    return custo;
}