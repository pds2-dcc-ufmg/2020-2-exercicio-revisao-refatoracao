#include <iostream>
#include <string>
#include <EncomendaNormal.hpp>

double calcula()
{
	double x = weight * cost_kg;
	return x;
}

void print()
{
	Encomenda::print();
	std::cout << "[Encomenda Normal]" << endl;
	std::cout << "  Peso: " << weight << endl
		  << "  Custo por kg: " << cost_kg << endl
		  << "  Custo total: " << final_cost << endl;
}
