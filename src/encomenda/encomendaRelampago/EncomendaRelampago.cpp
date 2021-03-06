#include "../Encomenda.hpp"
#include "EncomendaRelampago.hpp"
#include <iostream>

double EncomendaRelampago::calcula() {
  double result = this->getPeso() * this->getCustoKG();
	result += result * 0.25;
	return result;
}

void EncomendaRelampago::print(){
	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << this->getPeso() << endl
	<< "  Custo por kg: " << this->getCustoKG() << endl
	<< "  Taxa adicional: " << 0.25 << endl
	<< "  Custo total: " << this->getT() << endl;
}