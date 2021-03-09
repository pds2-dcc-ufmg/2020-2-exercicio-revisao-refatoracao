#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calculaCustoTotal(){
    return ((this->_peso * this->_custoKg) + (this->_peso * this->_custoKg)*this->_taxa);
}

void EncomendaRelampago::imprimeEncomenda(){
    Encomenda::imprimeEncomenda();
    std::cout << "[Encomenda Relâmpago]" << std::endl
        << "  Peso: " << this->_peso << std::endl
        << "  Custo por kg: " << this->_custoKg << std::endl
        << "  Taxa adicional: " << this->_taxa << std::endl
        << "  Custo total: " <<  this->_custoTotal << std::endl;
}
