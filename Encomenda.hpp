#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0; 
		Cliente remetente;
		Cliente destinatario;
	
	public:
		Encomenda();
		Encomenda(double _peso,double _custo_kg, Cliente _remetente, Cliente _destinatario);
		virtual double calcula();
		void print();

};

#endif