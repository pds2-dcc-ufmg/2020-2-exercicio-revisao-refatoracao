#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
class EncomendaRelampago : public Encomenda
{
public:
	EncomendaRelampago(double peso, double custoKG, Cliente remetente, Cliente destinatario)
		: Encomenda(peso, custoKG, remetente, destinatario, 0.25){};

	void print_sub() override;
};

#endif