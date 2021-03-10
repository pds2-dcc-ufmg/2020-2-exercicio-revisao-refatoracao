#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda {
	public:
		static const double TAXA = 0.25;
		double calcula() override;
		void print() override;
		EncomendaRelampago(double massa, double custoPorKg, Cliente remetente, Cliente destinatario)
						: massa(massa), custoPorKg(custoPorKg), remetente(remetente), destinatario(destinatario)
		{}
};
#endif