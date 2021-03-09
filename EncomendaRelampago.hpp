#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:
		static double const TAXA_ADICIONAL;

		EncomendaRelampago(double peso, double custo_por_kg,
							Cliente remetente, Cliente destinatario):
					Encomenda::Encomenda(peso, custo_por_kg, remetente, destinatario){}

		EncomendaRelampago(double peso,
						   Cliente remetente, Cliente destinatario):
						   Encomenda::Encomenda(peso, remetente, destinatario){
							   custo_por_kg = 18;
						   }

		double calcula_custo();

		void print(); // Imprime na tela os dados de uma encomenda relâmpago
		
};

#endif