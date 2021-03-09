#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
class EncomendaRelampago : public Encomenda
{

public:
	EncomendaRelampago();
	void print();

protected:
	double _taxa = 0.25;
};

#endif