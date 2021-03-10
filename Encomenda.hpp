#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	public:	
		Encomenda() {

		}
		Encomenda(const double peso, const double custoPorKg, Cliente& remetente, Cliente& destinatario) {
			this->peso = peso;
			this->custoPorKg = custoPorKg;
			this->remetente = remetente;
			this->destinatario = destinatario;
		}

		void print() const;

		double calcula() const;

	protected:
		Cliente remetente;
		Cliente destinatario;
		double peso = 0.0;
		double custoPorKg = 0.0;
		double custoTotal = 0.0;
};

#endif