#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcularCustoTotal(){
    return ((this->_peso * this->_custoKg) + (this->_peso * this->_custoKg)*this->_taxa);
}

void EncomendaRelampago::imprimirEncomenda(){
    Encomenda::imprimirEncomenda();
    std::cout << "[Encomenda Relâmpago]" << std::endl
        << "  Peso: " << this->_peso << std::endl
        << "  Custo por kg: " << this->_custoKg << std::endl
        << "  Taxa adicional: " << this->_taxa << std::endl
        << "  Custo total: " <<  this->_custoTotal << std::endl;
}