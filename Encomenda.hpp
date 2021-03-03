#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda
{
protected:
	double PESO = 0.0;
	double CUSTOkg = 0.0;
	double custoTotal = 0.0;
	Cliente remetente;
	Cliente dest;

public:
	virtual double calcula()
	{
		double x = PESO * CUSTOkg;
		return x;
	} // função virtual para calcular o preço da entrega

	virtual void printEncomenda(); // função virtual para imprimir dados da entrega

	~Encomenda();
};

#endif
