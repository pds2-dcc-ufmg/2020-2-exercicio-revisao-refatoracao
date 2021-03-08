#include "EncomendaRelampago.hpp"
#include <iostream>

double EncomendaRelampago::calcula_custo_total(){ // Calcula o custo total da encomenda com taxa; só de enfeite por enquanto

	double x = this->get_peso() * this->get_custo_kg();
	x += x * this->get_taxa();
			
	return x;
}

void EncomendaRelampago::print(){ // Imprime detalhes da encomenda

	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	std::cout << "  Peso: " << this->get_peso() << std::endl
		<< "  Custo por kg: " << this->get_custo_kg() << std::endl
		<< "  Taxa adicional: " << this->get_taxa() << std::endl
		<< "  Custo total: " << this->get_custo_total() << std::endl;

}

//Getter e setter para a taxa, exclusiva dessa classe
float EncomendaRelampago::get_taxa(){return this->taxa;}
void EncomendaRelampago::set_taxa(float _taxa){this->taxa = _taxa;}
