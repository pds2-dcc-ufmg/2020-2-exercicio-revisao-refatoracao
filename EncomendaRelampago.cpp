#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <iostream>

EncomendaRelampago::EncomendaRelampago(double EncPeso, double EncCustoKg, Cliente EncRemetente, Cliente EncDest){
    this->PESO = EncPeso;
    this->CUSTOkg = EncCustoKg;
    this->remetente = EncRemetente;
    this->dest = EncDest;
    this->taxa = 0.25;
    this->T = calcula();
}

double EncomendaRelampago::calcula(){
    double x = PESO * CUSTOkg;
    x += x * this->taxa;
    return x;
}

void EncomendaRelampago::print(){
    std::cout << "[Remetente]" << endl;
    remetente.print();
    std::cout << "[Destinatário]" << endl;
    dest.print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << PESO << endl
        << "  Custo por kg: " << CUSTOkg << endl
        << "  Taxa adicional: " << taxa << endl
        << "  Custo total: " << T << endl;
}

void EncomendaRelampago::setTaxa(double EncTaxa){
    this->taxa = EncTaxa;
}