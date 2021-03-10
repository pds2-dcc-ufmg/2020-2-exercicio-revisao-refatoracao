#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	  double calcula(); //calcula o custo de uma Encomenda normal
  	void print(); //imprime os dados da Encomenda e clientes relacionados

};

#endif