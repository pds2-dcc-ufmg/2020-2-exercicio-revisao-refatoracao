#include<iostream>
#include "EncomendaRelampago.hpp"	
void::EncomendaRelampago:: calcula(){

    double x=this->peso*this->custo;
    x+=x*0.25;
    this->set_custo_total(x);
}

void EncomendaRelampago::print(){

    Encomenda::print();
    cout << "[Encomenda Relâmpago]" << endl;
    cout << "  Peso: " << this->peso << endl
        << "  Custo por kg: " << this->custo << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << this->custo_total << endl;
}

int EncomendaRelampago::get_quantidade(){
    return this->quantidade_relampago;
}
int EncomendaRelampago::quantidade_relampago=0;