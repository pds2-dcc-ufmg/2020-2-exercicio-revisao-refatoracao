#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	
	protected:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
	
	public:
		Encomenda(double weight, double cost_per_kg, Cliente sender,  Cliente recipient): PESO(weight), CUSTOkg(cost_per_kg), remetente(sender) {}
		virtual void print();
		virtual double calcula();
		// se normal retorna 1, se relampago retorna 2;
		virtual int getClassType();
};

#endif