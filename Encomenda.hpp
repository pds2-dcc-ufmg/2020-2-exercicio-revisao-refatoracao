#ifndef Encomenda_H

#define Encomenda_H

#include <string>

#include <iostream>

class Encomenda{

	public:

		double calculaPrecoEncomenda();

		void imprimeRelatorioEncomendas();

	protected:

		double peso = 0.0;

		double custoPorQuilograma = 0.0;
};

#endif