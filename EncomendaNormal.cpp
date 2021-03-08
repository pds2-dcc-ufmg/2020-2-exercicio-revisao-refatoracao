#include "EncomendaNormal.hpp"
#include <iostream>

double EncomendaNormal::calcula_custo_total(){ // Calcula o custo total da encomenda; só de enfeite por enquanto

	double x = this->get_peso() * this->get_custo_kg();

	return x;

}

void EncomendaNormal::print(){ // Imprime detalhes da encomenda

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << std::endl;
		std::cout << "  Peso: " << this->get_peso() << std::endl
			<< "  Custo por kg: " << this->get_custo_kg() << std::endl
			<< "  Custo total: " << this->get_custo_total() << std::endl;

	}
