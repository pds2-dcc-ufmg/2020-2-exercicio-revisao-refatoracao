#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(); //Calcula o custo total de uma Encomenda Relampago.
		void print(); //Imprime o mesmo que Encomenda mais os dados de peso e custo referentes a Encomenda Relampago.
	
};

#endif
