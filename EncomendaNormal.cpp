#include "EncomendaNormal.hpp"
#include <iostream>

void EncomendaNormal::print() const {
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
              << "  Custo por kg: " << custoPorKg << std::endl
              << "  Custo total: " << custoTotal << std::endl;
}
