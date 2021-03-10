#include "EncomendaRelampago.hpp"
#include <iostream>

double EncomendaRelampago::calcula() const {
    return 1.25 * (peso * custoPorKg);
}

void EncomendaRelampago::print() const {
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
            << "  Custo por kg: " << custoPorKg << std::endl
            << "  Taxa adicional: " << 0.25 << std::endl
            << "  Custo total: " << custoTotal << std::endl;
}