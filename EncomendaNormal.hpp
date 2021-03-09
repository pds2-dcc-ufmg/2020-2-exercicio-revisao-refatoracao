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

		double x = PESO * CUSTOkg;

		return x;
	}
	
		/* Método print recebeu override pois o método foi herdado da classe mãe. */
	void print() override
	{

		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		dest.print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
				  << "  Custo por kg: " << CUSTOkg << endl
				  << "  Custo total: " << T << endl;
	}
};

#endif