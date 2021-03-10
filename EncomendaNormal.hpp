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

		double x = peso * custo_kg;
		return x;
	}

	void print()
	{

		Encomenda::print();

		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << peso << endl;
		cout << "  Custo por kg: " << custo_kg << endl;
		cout << "  Custo total: " << custo_total << endl;
	}
};

#endif