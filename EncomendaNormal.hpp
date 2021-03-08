#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	private:
		
	double calcula(); //calcula o preço da encomenda normal
	void print(); // printa na tela os dados da encomenda
	
};

#endif
