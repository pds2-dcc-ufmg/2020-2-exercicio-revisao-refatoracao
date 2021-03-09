#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	protected:
		double _weight = 0.0;
		double _cost = 0.0;
		double _total_cost = 0.0;
		Cliente *_sender;
		Cliente *_receiver;

	public:	
		Encomenda(double weight, double cost,Cliente sender, Cliente receiver);
		~Encomenda();
		double get_weight();
		double get_cost();

		double get_total_cost();
		
		void set_total_cost(double total_cost);
		
		void print();

};

#endif