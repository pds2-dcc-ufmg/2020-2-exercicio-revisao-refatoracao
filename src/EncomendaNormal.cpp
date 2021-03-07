#include "../headers/EncomendaNormal.hpp"
#include "../headers/Encomenda.hpp"
#include <iostream>

double EncomendaNormal::calcula() {
  return this->getPeso() * this->getCustoKG();
}

void EncomendaNormal::print(){
  Encomenda::print();
  std::cout << "[Encomenda Normal]" << endl;
  std::cout << "  Peso: " << this->getPeso() << endl
  << "  Custo por kg: " << this->getCustoKG() << endl
  << "  Custo total: " << this->getT() << endl;
}