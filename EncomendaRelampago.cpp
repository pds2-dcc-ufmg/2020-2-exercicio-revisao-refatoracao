#include <iostream>
#include "EncomendaRelampago.hpp"

void EncomendaRelampago::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << getPeso() << std::endl
              << "  Custo por kg: " << getCustoKg() << std::endl
              << "  Taxa adicional: " << getTaxaAdicional() << std::endl
              << "  Custo total: " << getCustoTotal() << std::endl;
}

double EncomendaRelampago::calcularTotal()
{
    return Encomenda::calcularTotal() * (1 + getTaxaAdicional());
}
