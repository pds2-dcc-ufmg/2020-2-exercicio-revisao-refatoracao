#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:	
		EncomendaNormal(double param_peso, double param_custo_kg, Cliente param_remetente, Cliente param_destinatario, double param_taxa=1.0) : 
							Encomenda(param_peso, param_custo_kg, param_remetente, param_destinatario) { 
			taxa = param_taxa;
		}
		void print() const;
};

#endif