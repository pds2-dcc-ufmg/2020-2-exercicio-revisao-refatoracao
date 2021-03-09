#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	EncomendaNormal();
	EncomendaNormal(double _peso,double _custo_kg, Cliente _remetente, Cliente _destinatario);
	double calcula() override;
	void print();

};

#endif