#ifndef ENCOEMENDANORMAL_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula(){};
	
	void print(){};

  EncomendaNormal(double _peso, double _custo_kg,
  Cliente remetente, Cliente dest){}

};

#endif