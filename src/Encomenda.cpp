#include <iostream>
#include "Encomenda.hpp"

double Encomenda::calculaCustoTotal(){
  double custoTotal = this->peso * this->custoKg;
  custoTotal += custoTotal * this->TAXA;

  return custoTotal;
}

void Encomenda::print(){
  std::cout << "[Remetente]" << endl;
  remetente->print();
  std::cout << "[Destinatário]" << endl;
  destinatario->print();
}