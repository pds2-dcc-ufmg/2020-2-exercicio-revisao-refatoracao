#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{
	public:	
		EncomendaNormal(){}
		EncomendaNormal(double peso, double custokg, Cliente remetente, Cliente destinatario);
		~EncomendaNormal(){};

		double calcula() override;
		void print() override;
};

#endif