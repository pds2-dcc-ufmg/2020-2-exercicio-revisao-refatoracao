#include "EncomendaNormal.hpp"
#include "Cliente.hpp"
#include <iostream>

EncomendaNormal::EncomendaNormal(double EncPeso, double EncCustoKg, Cliente EncRemetente, Cliente EncDest){
    this->PESO = EncPeso;
    this->CUSTOkg = EncCustoKg;
    this->remetente = EncRemetente;
    this->dest = EncDest;
    this->T = calcula();
}

double EncomendaNormal::calcula(){
    double x = PESO * CUSTOkg;
    return x;
}

void EncomendaNormal::print(){
    std::cout << "[Remetente]" << std::endl;
    remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    dest.print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << PESO << std::endl
        << "  Custo por kg: " << CUSTOkg << std::endl
        << "  Custo total: " << T << std::endl;

}