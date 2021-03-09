#ifndef ENCOMENDA_H 
#define ENCOMENDA_H

#include "Cliente.hpp"

class Encomenda {

	public:

        Encomenda(double peso, double custoEmKg, Cliente *remetente, Cliente *destinatario);

        virtual double calculaCustoTotal();

		void imprimeDados();

        virtual ~Encomenda() {}


    protected:

		Cliente *remetente;
		Cliente *destinatario;
			
		double peso = 0.0;
		double custoEmKg = 0.0;
		double custoTotal = 0.0;
};

#endif
