#include "EncomendaNormal.hpp"

void EncomendaNormal::print() {
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << getPeso() << std::endl
              << "  Custo por kg: " << getCustoKg() << std::endl
              << "  Custo total: " << calcularCustoTotal() << std::endl;
}
