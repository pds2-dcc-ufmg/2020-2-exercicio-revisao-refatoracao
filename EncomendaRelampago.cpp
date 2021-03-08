#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){
	double total = getPeso() * getCustoKg();
	total += total * TAXA;
	setTotal(total);
	return getTotal();
}

void EncomendaRelampago::print(){
	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << getPeso() << endl
	<< "  Custo por kg: " << getCustoKg() << endl
	<< "  Taxa adicional: " << TAXA << endl
	<< "  Custo total: " << getTotal() << endl;
}
