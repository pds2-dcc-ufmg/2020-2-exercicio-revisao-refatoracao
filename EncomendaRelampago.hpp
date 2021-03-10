#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	public:
		EncomendaRelampago(const double peso, const double custoPorKg, Cliente& remetente, Cliente& destinatario) : 
						Encomenda(peso, custoPorKg, remetente, destinatario) {}
		double calcula() const;
		void print() const;
};

#endif