#ifndef ENCOMENDA_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custo_kg = 0.0;
		double t = 0.0;
		Cliente remetente;
		Cliente dest;

    Encomenda(double _peso, double _custo_kg,
    Cliente remetente, Cliente dest){}
			
		void print(){};

};

#endif