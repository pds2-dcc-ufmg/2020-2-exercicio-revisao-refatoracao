#include "EncomendaNormal.hpp"

#include <iostream>
#include <string>

double EncomendaNormal::calculaPreco() {
    return peso * custoKg;
}

void EncomendaNormal::imprimeEncomenda() {
    std::cout << "[Remetente]" << std::endl;
    remetente.imprimeDados();
    std::cout << "[Destinatário]" << std::endl;
    destinatario.imprimeDados();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << peso << std::endl
              << "  Custo por kg: " << custoKg << std::endl
              << "  Custo total: " << calculaPreco() << std::endl;
}