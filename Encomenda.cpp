#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::print(){

    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    dest.print();
}

double Encomenda::getPeso(){
    return this->peso;
}

void Encomenda::setPeso(double p){
    this->peso = p;
}

double Encomenda::getCustoKg(){
    return this->custoKg;
}

void Encomenda::setCustoKg(double c){
    this->custoKg = c;
}

double Encomenda::getT(){
    return this->t;
}

void Encomenda::setT(double tt){
    this->t = tt;
}

double Encomenda::calcula() {
    return 0;
}
