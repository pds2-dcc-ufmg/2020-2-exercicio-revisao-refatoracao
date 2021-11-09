#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda{
	public:
		EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario): 
			Encomenda(peso, custoKg, remetente, destinatario){};

		double calcularCustoTotal();
		void imprimirEncomenda() override;
	
	private:
		double _custoTotal = 0.0;
		double _taxa = 0.25;
};

#endif