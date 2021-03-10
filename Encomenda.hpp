#ifndef ENCOMENDA_HPP
#define ENCOMENDA_HPP

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente dest;
	
	public:
	
		Encomenda();
		Encomenda(double peso, double custoKg, Cliente remetente, Cliente dest);
		~Encomenda();

		void print();

};

#endif