#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	public:	
		Encomenda(double peso, double custo,Cliente remetente, Cliente destinatario);
		~Encomenda();
		double get_peso();
		double get_custo();
		double get_custo_total();
		void set_custo_total(double custo_total);
		void print();

	protected:
		double peso=0.0;
		double custo=0.0;
		double custo_total=0.0;
		Cliente *remetente;
		Cliente *destinatario;

};

#endif