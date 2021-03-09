#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public Encomenda
{

public:
  using Encomenda::Encomenda;
	double calcula();

	void print();
};

#endif