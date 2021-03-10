#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente dest);

		void print();

		double getCustoTotal();
};

#endif