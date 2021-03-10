#ifndef ENCOMENDANORMAL_HPP
#define ENCOMENDANORMAL_HPP

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente dest);
		
		void print();


		double getCustoTotal();
};

#endif