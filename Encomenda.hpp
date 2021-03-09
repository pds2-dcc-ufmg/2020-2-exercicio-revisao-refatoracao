#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda {

	protected:

		double _peso;
		double _custoKG;
		double _custoTotal;
		int _quantidadeEntregas;
		Cliente remetente;
		Cliente destinatario;

	public:

		Encomenda(); // declaracao do construtor de encomenda
		void print() const; // declaracao do metodo print

};

#endif
