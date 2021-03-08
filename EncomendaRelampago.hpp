#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double express_price_calculate(); // calcula o preço da encomenda relampago
		void print(); // printa na tela os dados da encomenda
	
};

#endif
