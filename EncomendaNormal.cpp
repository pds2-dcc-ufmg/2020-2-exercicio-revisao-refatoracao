#include <iostream>
#include <string>
#include <EncomendaNormal.hpp>

double normal_price_calculate()
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
