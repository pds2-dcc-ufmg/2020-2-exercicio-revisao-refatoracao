#include "EncomendaNormal.hpp"        
#include "Encomenda.hpp"
#include "Cliente.hpp"

EncomendaNormal(){}

EncomendaNormal::EncomendaNormal(double _peso, double _CustoKg){
    this->peso = _peso;
    this->CustoKg = _CustoKg;
}

void EncomendaNormal::print(){
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << this->getPeso() << std::endl
			<< "  Custo por kg: " << this->getCustoKg() << std::endl
			<< "  Custo total: " << this->getTotal() << std::endl;
}

double EncomendaNormal::calcula() {
  return this->getPeso() * this->getCustoKg();
}