#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda{

	public:
		double calculaCusto();
		void printEncomenda();

		EncomendaNormal(double pesoEncomenda, double custoPorKg, Cliente remetente, Cliente destinatario);
			

};

#endif