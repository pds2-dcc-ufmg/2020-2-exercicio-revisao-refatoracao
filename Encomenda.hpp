#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	public:
		
		void print();// imprime na tela os dados da encomenda

	private:

		double weight = 0.0;
		double cost_kg = 0.0;
		double final_cost = 0.0;
		double tax = 0.25;
		Cliente sender;
		Cliente receiver;
	
};

#endif
