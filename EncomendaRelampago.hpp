#ifndef ENCOMENDARELAMPAGO_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){};
		
		void print(){};

    EncomendaRelampago(double _peso, double _custo_kg, Cliente remetente, Cliente dest){}
		

};

#endif