#include<iostream>
#include"EncomendaNormal.hpp"
using namespace std;

void EncomendaNormal::calcula(){
    double aux = this->custo * this->peso;
    this->setCustoTotal(aux);
}

void EncomendaNormal::print(){

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << this-> peso << endl
        << "  Custo por kg: " << this-> custo << endl
        << "  Custo total: " << this-> custoTotal<< endl;

}

int EncomendaNormal::getQntd(){
    return this->qntdNormal;
}

int EncomendaNormal::qntdNormal = 0;