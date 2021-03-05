#ifndef EncomendaNormal_H
#define EncomendaNormal_H
#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		/*  Construtor  */
		EncomendaNormal(double p, double custo, Cliente rem, Cliente des):
			Encomenda(p,custo,rem,des) {}

		/*  Imprime na tela o remetente, destinatário, tipo e dados da encomenda  */
		virtual void print() override;

};

#endif