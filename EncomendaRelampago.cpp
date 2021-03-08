#include <iostream>
#include <string>
#include <EncomendaRelampago.hpp>

double express_price_calculate()
{
	double x = weight * cost_kg;
	x += x * tax;	
	return x;
	
}

void print() 
{
	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << weight << endl
		  << "  Custo por kg: " << cost_kg << endl
		  << "  Taxa adicional: " << tax << endl
		  << "  Custo total: " << final_cost << endl;
}
