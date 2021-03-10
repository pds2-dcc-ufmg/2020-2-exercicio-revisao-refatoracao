#include <iostream>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula() {
	return Encomenda::calcula() * (1 + TAXA);
}

void EncomendaRelampago::print() {
	Encomenda::print();
	std::cout	<< "---------------------" << std::endl
				<< "[Encomenda Relâmpago]" << std::endl
				<< "  Peso: " << massa << std::endl
				<< "  Custo por kg: " << custoPorKg << std::endl
				<< "  Taxa adicional: " << TAXA << std::endl
				<< "  Custo total: " << EncomendaRelampago::calcula() << std::endl;
}