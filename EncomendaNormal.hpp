#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal : public Encomenda
{

public:
	EncomendaNormal(double peso, double custo, Cliente _remetente, Cliente destinatario);

	double calcula();

	void print();
};

#endif