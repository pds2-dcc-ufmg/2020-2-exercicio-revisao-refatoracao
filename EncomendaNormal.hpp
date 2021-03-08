#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double normal_price_calculate(); //calcula o preço da encomenda normal
	void print(); // printa na tela os dados da encomenda
	
};

#endif
