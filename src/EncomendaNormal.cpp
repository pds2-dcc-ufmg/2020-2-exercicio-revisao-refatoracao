#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"

double EncomendaNormal::calculaCustoTotal(){
    return this->_peso * this->_custoKg;
}

void EncomendaNormal::imprimeEncomenda(){
    Encomenda::imprimeEncomenda();
    std::cout << "[Encomenda Normal]" << std::endl
        << "  Peso: " << this->_peso << std::endl
        << "  Custo por kg: " << this->_custoKg << std::endl
        << "  Custo total: " << this->_custoTotal << std::endl;
}
