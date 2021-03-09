#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	protected:
		double peso = 0.0;
		double custo = 0.0;
		double custoTotal = 0.0;
		Cliente *remetente;
		Cliente *destinatario;

	public:	
		Encomenda(double peso, double custo,Cliente remetente, Cliente destinatario);
		~Encomenda();
		double getPeso();
		double getCusto();

		double getCustoTotal();
		
		void setCustoTotal(double custoTotal);
		
		void print();

};

#endif