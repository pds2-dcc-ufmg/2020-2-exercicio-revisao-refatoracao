#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double weight = 0.0;
		double cost_kg = 0.0;
		double T = 0.0;
		Cliente sender;
		Cliente receiver;
			
		void print();// imprime na tela os dados da encomenda

};

#endif
