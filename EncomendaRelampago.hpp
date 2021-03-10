#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public Encomenda
{

public:
	double calcula()
	{

		double x = peso * custo_kg;
		x += x * 0.25;
		return x;
	}

	void print()
	{

		Encomenda::print();
		cout << "[Encomenda Relâmpago]" << endl;
		cout << "  Peso: " << peso << endl;
		cout << "  Custo por kg: " << custo_kg << endl;
		cout << "  Taxa adicional: " << 0.25 << endl;
		cout << "  Custo total: " << custo_total << endl;
	}
};

#endif