#include<iostream>
#include"EncomendaNormal.hpp"
using namespace std;

void EncomendaNormal::calcula(){
    double aux=this->custo*this->peso;
    this->set_custo_total(aux);
}

void EncomendaNormal::print(){

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << this->peso << endl
        << "  Custo por kg: " << this->custo << endl
        << "  Custo total: " << this->custo_total<< endl;

}

int EncomendaNormal::get_quantidade(){
    return this->quantidade_normal;
}
int EncomendaNormal::quantidade_normal=0;