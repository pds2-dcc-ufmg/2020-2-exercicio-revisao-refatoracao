#include "EncomendaRelampago.hpp"

#include <iostream>
#include <string>

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
              << "  Custo total: " << calculaPreco() << std::endl;
}