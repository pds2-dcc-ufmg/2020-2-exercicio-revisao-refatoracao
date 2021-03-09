#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal(double peso, double custo_por_kg,
						Cliente remetente, Cliente destinatario):
						Encomenda::Encomenda(peso, custo_por_kg, remetente, destinatario){}

		EncomendaNormal(double peso,
						Cliente remetente, Cliente destinatario):
						Encomenda::Encomenda(peso, remetente, destinatario){
							custo_por_kg = 12;
						}
	
		double calcula_custo();
		void print(); // Imprime na tela os dados de uma encomenda normal

};

#endif