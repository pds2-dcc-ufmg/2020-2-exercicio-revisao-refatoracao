#ifndef ENCOMENDARELAMPAGO_H
#define ENCOMENDARELAMPAGO_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

	double calculaCusto() override;

	void print() override;

	EncomendaRelampago(double Peso, double CustoKg, Cliente* remetente, Cliente* dest);

};
