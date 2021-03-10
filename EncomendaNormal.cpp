#include "EncomendaNormal.hpp"
#include <iostream>

double EncomendaNormal::calcula(){
    return peso * custo_kg;
}

void EncomendaNormal::print(){
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: "           << peso        << std::endl
              << "  Custo por kg: "   << custo_kg    << std::endl
              << "  Custo total: "    << custo_total << std::endl;
}