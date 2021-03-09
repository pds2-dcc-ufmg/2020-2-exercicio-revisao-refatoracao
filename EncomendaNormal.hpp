#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda {
	private:
		static int _normal_quantity;
		

		
	public:	
		EncomendaNormal(double weight, double cost,Cliente sender, Cliente receiver):Encomenda(weight,cost, sender,receiver) {
			EncomendaNormal::_normal_quantity++;
		}
		void calculate();
		void print();

		int get_quantity();
		
		

};

#endif