#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(); // calcula o valor do custo total: (custo por kg * peso) + taxa adicional

		void print(); // imprime na tela os dados do peso , custo por kg , taxa adicional e custo total da encomenda

};

#endif
