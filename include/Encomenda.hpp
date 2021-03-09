#ifndef ENCOMENDA_H 
#define ENCOMENDA_H

#include "Cliente.hpp"

class Encomenda {

	public:

        Encomenda(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario);

        virtual double calculaCustoTotal();

		virtual void imprimeDados();

        virtual ~Encomenda() {}

    protected:

		Cliente *remetente;
		Cliente *destinatario;
			
		double peso = 0.0;
		double custoPorKg = 0.0;
		double custoTotal = 0.0;

    private:

        double taxaAdicional = 0;
};

#endif
