#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;
#define taxa 0.25

class EncomendaRelampago: public Encomenda{

	public:
		/*  Construtor  */
		EncomendaRelampago(double p, double custo, Cliente rem, Cliente des):
		 Encomenda(p,custo,rem,des)  {}

		/*  Calcula o preço total da encomenda com a taxa especial  */ 
		virtual double calculaTotal() override;

		/*  Imprime na tela o remetente, destinatário, tipo e dados da encomenda  */
		virtual void print() override;

};

#endif