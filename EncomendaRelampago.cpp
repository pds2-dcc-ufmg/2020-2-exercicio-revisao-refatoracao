#include<iostream>
#include "EncomendaRelampago.hpp"	
void::EncomendaRelampago:: calculate(){

    double aux;
    aux = _weight * _cost;
    aux += aux * 0.25;
    this-> set_total_cost(aux);
}

void EncomendaRelampago::print(){

    Encomenda::print();
    cout << "[Encomenda Relâmpago]" << endl;
    cout << "  Peso: " << _weight << endl
        << "  Custo por kg: " << _cost << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << _total_cost << endl;
}

int EncomendaRelampago::get_quantity(){
    return _lightning_quantity;
}

int EncomendaRelampago::_lightning_quantity=0;