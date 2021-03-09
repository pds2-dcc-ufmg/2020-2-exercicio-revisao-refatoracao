#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		double _peso = 0.0;
		double _custoKg = 0.0;
		double _total = 0.0;
		Cliente _remetente;
		Cliente _dest;

		void print(); //Imprime na tela os dados do remetente e destinátario.
		double calcula(); //Calcula o valor total da encomenda.

};

#endif
