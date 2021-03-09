#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcularCustoTotal(){
    return this->_peso * this->_custoKg;
}

void EncomendaNormal::imprimirEncomenda(){
    Encomenda::imprimirEncomenda();
    std::cout << "[Encomenda Normal]" << std::endl
        << "  Peso: " << this->_peso << std::endl
        << "  Custo por kg: " << this->_custoKg << std::endl
        << "  Custo total: " << this->_custoTotal << std::endl;
}