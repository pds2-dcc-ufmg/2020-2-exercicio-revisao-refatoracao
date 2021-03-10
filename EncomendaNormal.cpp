#include "EncomendaNormal.hpp"
#include <iostream>

void EncomendaNormal::print() const{
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl
              << "  Peso: " << peso   << std::endl
              << "  Custo por kg: "   << custo_kg    << std::endl
              << "  Custo total: "    << custo_total << std::endl;
}