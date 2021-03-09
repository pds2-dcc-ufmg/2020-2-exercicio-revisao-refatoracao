#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda
{

public:
	double calcula()
	{

		double x = peso * custoKg;

		return x;
	}

	void print()
	{

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
							<< "  Custo por kg: " << custoKg << endl
							<< "  Custo total: " << t << endl;
	}
};

#endif