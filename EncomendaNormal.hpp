#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda {
	public:	
		EncomendaNormal(double _peso, double _custo_kg, Cliente &_remetente, Cliente &_destinatario): Encomenda(_peso, _custo_kg, _remetente, _destinatario) {
		}
		double calcula();
		void print();
};

#endif