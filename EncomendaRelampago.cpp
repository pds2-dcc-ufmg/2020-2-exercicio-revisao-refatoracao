#include "EncomendaRelampago.hpp"
#include <iostream>

void EncomendaRelampago::print() const{
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl
              << "  Peso: "              << peso        << std::endl
              << "  Custo por kg: "      << custo_kg    << std::endl
              << "  Taxa adicional: "    << taxa - 1.0  << std::endl
              << "  Custo total: "       << custo_total << std::endl;
}