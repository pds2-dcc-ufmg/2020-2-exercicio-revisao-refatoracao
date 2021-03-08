#ifndef ENCOMENDANORMAL_H
#define ENCOMENDANORMAL_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calcula();
	void print();

  void cadastroNormal(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario);
};

#endif