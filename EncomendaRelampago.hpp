#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calculaPreco();
		void printEncomenda();

    private:

    double taxaEncRelampago = 0.25;
};

#endif
