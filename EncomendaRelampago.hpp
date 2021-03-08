#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
private:
	double _taxaAdicional = 0.25;
public:

	double calcula();
	void print();

//getter e setter
	double getTaxa();
	void setTaxa(double taxaAdicional);

};

#endif