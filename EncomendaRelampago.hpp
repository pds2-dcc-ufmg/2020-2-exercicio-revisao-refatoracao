#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#define TAXA 0.25

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double peso, double custo, Cliente remet, Cliente destin): peso(peso), custo_por_kg(custo), remetente(remet), dest(destin){
			double x = peso * custo_por_kg;
			x += x * TAXA;
			T = x;
		};

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