#include "EncomendaRelampago.hpp"
#include <iostream>

double EncomendaRelampago::calcula() {
    return peso * custo_kg * 1.25;
}

void EncomendaRelampago::print() {
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: "              << peso        << std::endl
              << "  Custo por kg: "      << custo_kg    << std::endl
              << "  Taxa adicional: "    << 0.25        << std::endl
              << "  Custo total: "       << custo_total << std::endl;
}