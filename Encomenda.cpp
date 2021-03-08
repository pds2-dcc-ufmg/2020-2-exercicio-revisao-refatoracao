#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){
    this->_custoTotal = this->_peso * this->_custoKg;
    
    return this->_custoTotal;
}




void EncomendaNormal::print(){
    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << this->_peso << endl
              << "  Custo por kg: " << this->_custoKg << endl
              << "  Custo total: " << this->_custoTotal << endl;
}

