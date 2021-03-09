#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda{
	public:
		EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario): 
			Encomenda(peso, custoKg, remetente, destinatario){};
		
		double calculaCustoTotal();
		void imprimeEncomenda() override;
	
	protected:
		double _custoTotal = 0.0;
};

#endif