#include "EncomendaNormal.hpp"
#include <iostream>

EncomendaNormal::EncomendaNormal(double mass, double cost, Cliente rement, Cliente dest): Encomenda(mass, cost, rement, dest){}

void EncomendaNormal::print(){
  Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << this->peso << std::endl
		<< "  Custo por kg: " << this->custo_kg << std::endl
		<< "  Custo total: " << this->T << std::endl;
}

double EncomendaNormal::calcula(){
    return Encomenda::calcula();
}
