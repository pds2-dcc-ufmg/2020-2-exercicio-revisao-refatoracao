#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#define TAXA 0.25
using namespace std;

class EncomendaRelampago : public Encomenda
{

public:
	double calcula()
	{

		double x = PESO * CUSTOkg;
		x += x * TAXA; /*constante TAXA foi utilizada pra caso o valor mude não
			precise alterar todos os valores do código. */

		return x;
	}
	/* Método print recebeu override pois o método foi herdado da classe mãe. */
	void print() override
	{

		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		dest.print();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Peso: " << PESO << endl
				  << "  Custo por kg: " << CUSTOkg << endl
				  << "  Taxa adicional: " << TAXA << endl
				  << "  Custo total: " << T << endl;
	}
};

#endif