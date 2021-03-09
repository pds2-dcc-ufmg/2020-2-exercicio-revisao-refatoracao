#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		double _weight;
		double _costKg;
		double _total;
		Cliente _sender;
		Cliente _recipient;
			
		virtual void print();

		Encomenda(double weight, double costKg, Cliente sender, Cliente recipient);
		Encomenda(); // construtor padrão

		virtual double getTotal();
};

#endif