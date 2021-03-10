#ifndef ENCOMENDA_H 
#define ENCOMENDA_H

#include "Cliente.hpp"

class Encomenda {

	public:

		Encomenda(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario);

		// Calcula custo total de uma encomenda
    virtual double calculaCustoTotal();

		// Imprime dados dos clientes
		virtual void print();

    virtual ~Encomenda() {}

    protected:

			double peso = 0.0;
			double custoPorKg = 0.0;
			double custoTotal = 0.0;
			double taxa;
			Cliente *remetente;
			Cliente *destinatario;
};

#endif
