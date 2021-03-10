#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda {
	public:
		void print() override;
		EncomendaNormal(double massa, double custoPorKg, Cliente remetente, Cliente destinatario)
						: massa(massa), custoPorKg(custoPorKg), remetente(remetente), destinatario(destinatario)
		{}
};
#endif