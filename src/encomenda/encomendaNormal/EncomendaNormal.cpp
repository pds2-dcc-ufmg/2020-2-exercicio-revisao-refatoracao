#include "EncomendaNormal.hpp"
#include "../Encomenda.hpp"
#include "../../cliente/Cliente.hpp"

#include "iostream"

double EncomendaNormal::calcula() {
  double x = this->getPeso() * this->getCustoKG();
  return x;
}

void EncomendaNormal::print(){
  Encomenda::print();
  std::cout << "[Encomenda Normal]" << endl;
  std::cout << "  Peso: " << this->getPeso() << endl
  << "  Custo por kg: " << this->getCustoKG() << endl
  << "  Custo total: " << this->getT() << endl;
}