#include "EncomendaRelampago.hpp"


double EncomendaRelampago::getTaxa(){
    return _taxaAdicional;
}
void EncomendaRelampago::setTaxa(double taxaAdicional){
    this->_taxaAdicional = taxaAdicional;
}

void EncomendaRelampago::print(){
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << this->_peso << endl
        << "  Custo por kg: " << this->_custoKg << endl
        << "  Taxa adicional: " << _taxaAdicional << endl
        << "  Custo total: " << _custoTotal << endl;

}

double EncomendaRelampago::calcula(){
    double x = this->_peso * this->_custoKg;
    x += x * this->_taxaAdicional;
    this->_custoTotal = x;
    return this->_custoTotal;
}