#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		EncomendaRelampago(double peso, double custo,Cliente remetente, Cliente destinatario):Encomenda(peso,custo, remetente,destinatario){}

		double calcula();

		void print();
};


#endif