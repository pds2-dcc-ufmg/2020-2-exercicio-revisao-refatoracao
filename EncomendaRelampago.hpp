#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

		const double _taxa = 0.25;

	public:

		EncomendaRelampago(double peso, double custoKg, Cliente &remetente, Cliente &dest) : Encomenda(peso, custoKg, remetente, dest) {};
		double calcula(); //Calcula o custo total de uma Encomenda Relampago.
		void print(); //Imprime o mesmo que Encomenda mais os dados de peso e custo referentes a Encomenda Relampago.

};

#endif
