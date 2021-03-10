#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	public:
		EncomendaRelampago(double param_peso, double param_custo_kg, Cliente param_remetente, Cliente param_destinatario, double param_taxa=1.25) : 
							Encomenda(param_peso, param_custo_kg, param_remetente, param_destinatario) {
			taxa = param_taxa;
		}
		void print() const;
};

#endif