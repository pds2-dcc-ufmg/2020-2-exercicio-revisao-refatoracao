#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago : public Encomenda {
	public:
		using Encomenda::Encomenda;
		double preco_total(double valor_adicional = 0.25);
		void print() override;
};

#endif