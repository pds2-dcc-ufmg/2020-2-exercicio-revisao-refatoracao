#include "../incl/EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(double _peso,
                                 double _custoKg,
                                 Cliente _remetente,
                                 Cliente _destinatario)
    : Encomenda(_peso, _custoKg, _remetente, _destinatario){};

double EncomendaNormal::calcularCustoTotal() {
    return Encomenda::calcularCustoTotal();
}

void EncomendaNormal::print() {
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << getPeso() << std::endl
              << "  Custo por kg: " << getCustoKg() << std::endl
              << "  Custo total: " << calcularCustoTotal() << std::endl;
}
