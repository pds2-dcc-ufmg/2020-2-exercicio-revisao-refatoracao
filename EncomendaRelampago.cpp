#include<iostream>
#include "EncomendaRelampago.hpp"	
void::EncomendaRelampago:: calcula(){

    double x = this-> peso * this-> custo;
    x += x * 0.25;
    this-> setCustoTotal(x);
}

void EncomendaRelampago::print(){

    Encomenda::print();
    cout << "[Encomenda Relâmpago]" << endl;
    cout << "  Peso: " << this-> peso << endl
        << "  Custo por kg: " << this-> custo << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << this-> custoTotal << endl;
}

int EncomendaRelampago::getQntd(){
    return this->qntdRelampago;
}