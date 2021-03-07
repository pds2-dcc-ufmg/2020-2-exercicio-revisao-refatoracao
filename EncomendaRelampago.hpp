#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{
	private:
		static constexpr double taxa_adicional = 0.25;

	public:
		EncomendaRelampago(){}
		EncomendaRelampago(double peso, double custokg, Cliente remetente, Cliente destinatario);
		~EncomendaRelampago(){};

		double getTaxaAdicional(){ return this->taxa_adicional; }
		double calcula() override;
		void print() override;
};

#endif