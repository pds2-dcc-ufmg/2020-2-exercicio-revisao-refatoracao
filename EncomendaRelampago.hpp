#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double EncPeso, double EncCustoKg, Cliente EncRemetente, Cliente EncDest);

		double calcula() override;

		void print() override;

		void setTaxa(double EncTaxa);
	
	protected:
		
		double taxa;

};

#endif