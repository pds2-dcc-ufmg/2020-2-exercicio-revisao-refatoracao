#include <iostream>
#include "EncomendaNormal.hpp"

void EncomendaNormal::print() {
	Encomenda::print();
	std::cout	<< "------------------" << std::endl
				<< "[Encomenda Normal]" << std::endl
				<< "  Peso: " << massa << std::endl
				<< "  Custo por kg: " << custoPorKg << std::endl
				<< "  Custo total: " << EncomendaNormal::calcula() << std::endl;
}