#ifndef Encomenda_H
#define Encomenda_H


#include "Cliente.hpp"
using namespace std;

class Encomenda{
	protected:
		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
		Cliente *remetente;
		Cliente *dest;

	public:

		Encomenda(double peso, double custo_kg, Cliente remetente, Cliente dest);
		~Encomenda();
		
		void set_custo_total(double custo_total);

		void print();
		

};

#endif