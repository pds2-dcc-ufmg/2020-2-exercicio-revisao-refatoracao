#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

using namespace std;

class Encomenda {

	protected:

		double peso = 0.0;
		double custoPorkg = 0.0;
		double custoTotal = 0.0;
		Cliente *remetente;
		Cliente *destinatario;
		
		virtual void _print() {}
		virtual void _calculaCustoTotal() {}
	
	public:

		Encomenda(double peso, double custoPorkg, Cliente *remetente, Cliente *destinatario);

		double getCustoTotal();

		void print();
};

#endif