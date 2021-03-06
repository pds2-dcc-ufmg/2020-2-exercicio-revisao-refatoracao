#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda{

	private:
		double taxaAdicional = 0.25;

	public:
		double calculaCusto();
		void printEncomenda();

		double getTaxaAdicional();
		void setTaxaAdicional(double taxaAdicional);

		EncomendaRelampago(double pesoEncomenda, double custoPorKg, 
							Cliente remetente, Cliente destinatario);
};

#endif