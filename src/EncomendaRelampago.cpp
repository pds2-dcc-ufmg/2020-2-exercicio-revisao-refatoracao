#include "../incl/EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago(double _peso,
                                       double _custoKg,
                                       Cliente _remetente,
                                       Cliente _destinatario)
    : Encomenda(_peso, _custoKg, _remetente, _destinatario){};

double EncomendaRelampago::calcularCustoTotal() {
    double x = Encomenda::calcularCustoTotal();
    x += x * 0.25;
    return x;
}

void EncomendaRelampago::print() {
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << getPeso() << std::endl
              << "  Custo por kg: " << getCustoKg() << std::endl
              << "  Taxa adicional: " << taxaAdiconal << std::endl
              << "  Custo total: " << calcularCustoTotal() << std::endl;
}
