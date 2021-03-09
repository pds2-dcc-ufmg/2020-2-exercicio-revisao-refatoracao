#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda {
	private:
		static int _lightning_quantity;
	public:
		EncomendaRelampago(double weight, double cost,Cliente sender, Cliente receiver):Encomenda(weight,cost, sender, receiver) {
			EncomendaRelampago::_lightning_quantity++;
		}
		void calculate();
		void print();
		int get_quantity();
};

#endif
