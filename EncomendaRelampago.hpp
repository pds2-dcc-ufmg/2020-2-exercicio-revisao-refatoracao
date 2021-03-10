#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{
	public:
		EncomendaRelampago(double _peso, double _custo_kg, Cliente &_remetente, Cliente &_destinatario): Encomenda(_peso, _custo_kg, _remetente, _destinatario) {
		}
		double calcula();
		void print();
};

#endif