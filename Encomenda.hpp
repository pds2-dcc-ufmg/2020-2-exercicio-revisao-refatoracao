#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	protected:
		Cliente remetente;
		Cliente destinatario;
		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
	
	public:	
		Encomenda();
		Encomenda(double _peso, double _custoKg, Cliente &_remetente, Cliente &_destinatario) {
			peso = _peso;
			custo_kg = _custoKg;
			remetente = _remetente;
			destinatario = _destinatario;
		}
		void print();
};

#endif