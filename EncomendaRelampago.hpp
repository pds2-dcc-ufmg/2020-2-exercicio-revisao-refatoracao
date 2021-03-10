#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(); //calcula o custo de uma Encomenda Relampago
		void print(); //imprime os dados da Encomenda e clientes relacionados

};

#endif