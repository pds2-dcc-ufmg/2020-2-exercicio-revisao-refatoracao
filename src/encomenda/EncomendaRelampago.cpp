#include "EncomendaRelampago.hpp"

#include <iostream>
#include <string>

EncomendaRelampago::EncomendaRelampago(double _peso,
                                       double _custoKg,
                                       Cliente _remetente,
                                       Cliente _destinatario) : Encomenda(_peso, _custoKg, _remetente, _destinatario) {
    custoTotal = calculaPreco();
};

double EncomendaRelampago::calculaPreco() {
    double total = peso * custoKg;
    total += total * taxaAdicional;
    return total;
}

void EncomendaRelampago::imprimeEncomenda() {
    std::cout << "[Remetente]" << std::endl;
    remetente.imprimeDados();
    std::cout << "[Destinatário]" << std::endl;
    destinatario.imprimeDados();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
              << "  Custo por kg: " << custoKg << std::endl
              << "  Taxa adicional: " << taxaAdicional << std::endl
              << "  Custo total: " << custoTotal << std::endl;
}