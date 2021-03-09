#include <iostream>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula()
{
		double x = peso * custoKg;
		return x;
}

void EncomendaNormal::print()
{

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << peso << endl
							<< "  Custo por kg: " << custoKg << endl
							<< "  Custo total: " << t << endl;
}
