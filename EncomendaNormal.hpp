#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
		
		EncomendaNormal(double peso, double custo, Cliente remet, Cliente destin): peso(peso), custo_por_kg(custo), remetente(remet), dest(destin){
			T = peso * custo_por_kg;
		}
		
		virtual double calcula() const override;

		virtual void print() const override;

	protected:

		double peso = 0.0;
		double custo_por_kg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif