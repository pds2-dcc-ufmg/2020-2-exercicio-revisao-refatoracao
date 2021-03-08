#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){
    setTotal(getPeso() * getCustoKg());
	return getTotal();
}

void EncomendaNormal::print(){
	Encomenda::print();
	std::cout << "[Encomenda Normal]" << endl;
	std::cout << "  Peso: " << getPeso() << endl
	<< "  Custo por kg: " << getCustoKg() << endl
	<< "  Custo total: " << getTotal() << endl;
}
