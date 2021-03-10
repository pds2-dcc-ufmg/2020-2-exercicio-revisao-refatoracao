#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	public:	
		Encomenda(double param_peso, double param_custo_kg, Cliente param_remetente, Cliente param_destinatario) {
			peso         = param_peso;
			custo_kg      = param_custo_kg;
			remetente    = param_remetente;
			destinatario = param_destinatario;
		}

		void print() const;
		double calcula() const;

	protected:
		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
		double taxa = 1.0;
		Cliente remetente;
		Cliente destinatario;
};

#endif