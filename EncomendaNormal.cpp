#include "EncomendaNormal.hpp"
#include <iostream>

double EncomendaNormal::calcula(){
    double x = peso * custoKg;
    return x;
}

void EncomendaNormal::print(){
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
        << "  Custo por kg: " << custoKg  << std::endl
        << "  Custo total: " << custoTotal << std::endl;
}