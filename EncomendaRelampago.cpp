#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

	double x = Encomenda::calcula();
	x += x * _taxa;

	return x;

}

void EncomendaRelampago::print(){

	Encomenda::print();

	std::cout << "[Encomenda Relâmpago]" << std::endl;

	std::cout << "  Peso: " << _peso << std::endl
	<< "  Custo por kg: " << _custoKg << std::endl
	<< "  Taxa adicional: " << _taxa << std::endl
	<< "  Custo total: " << _total << std::endl;

}
