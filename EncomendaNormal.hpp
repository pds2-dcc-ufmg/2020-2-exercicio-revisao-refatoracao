#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:	
		EncomendaNormal(const double peso, const double custoPorKg, Cliente& remetente, Cliente& destinatario) : 
						Encomenda(peso, custoPorKg, remetente, destinatario) {}
		void print() const;
};

#endif