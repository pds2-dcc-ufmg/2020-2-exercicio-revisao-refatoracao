#include "EncomendaRelampago.hpp"
#include <iostream>

double EncomendaRelampago::calcula(){
    double x = peso * custoKg;
    x += x * 0.25;
    return x;
}

void EncomendaRelampago::print(){
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
            << "  Custo por kg: " << custoKg << std::endl
            << "  Taxa adicional: " << 0.25 << std::endl
            << "  Custo total: " << custoTotal << std::endl;
}