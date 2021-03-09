#include <iostream>
#include <string>
#include "Encomenda.hpp"

virtual void print(){

    std::cout << "[Remetente]" << endl;
    remetente.print();
    std::cout << "[Destinatário]" << endl;
    dest.print();
}

void getPeso(){
    return this->peso;
}

void setPeso(double p){
    this->peso = p;
}

void getCustoKg(){
    return this->custoKg;
}

void setCustoKg(double c){
    this->custoKg = c;
}

void getT(){
    return this->t;
}

void setT(double tt){
    this->t = tt;
}
