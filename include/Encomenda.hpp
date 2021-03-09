#ifndef ENCOMENDA_H 
#define ENCOMENDA_H

#include "Cliente.hpp"

class Encomenda {

	public:

        Encomenda(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario);

        // Calcula o custo total de uma encomenda
        // considerando seu peso e custo por Kg
        // e uma taxa adicional do tipo de encomenda
        virtual double calculaCustoTotal();

        // Imprime na tela as informações dos clientes
        // envolvidos na encomenda
		virtual void imprimeDados();

        virtual ~Encomenda() {}

    protected:

		Cliente *remetente;
		Cliente *destinatario;
			
		double peso = 0.0;
		double custoPorKg = 0.0;
		double custoTotal = 0.0;
        double taxaAdicional = 0;
};

#endif
