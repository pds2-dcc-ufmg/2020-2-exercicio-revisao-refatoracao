#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda
{
public:
	EncomendaNormal(){};
	EncomendaNormal(double peso, double custoKG, Cliente remetente, Cliente destinatario)
		: Encomenda(peso, custoKG, remetente, destinatario, 0.0){};

	void print_sub() override;
};

#endif