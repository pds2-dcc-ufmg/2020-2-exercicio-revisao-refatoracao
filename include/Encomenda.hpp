#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda {
	protected:
		double massa = 0.0;
		double custoPorKg = 0.0;
		Cliente remetente;
		Cliente destinatario;

	public:
		void print();
		double calcula();
};
#endif