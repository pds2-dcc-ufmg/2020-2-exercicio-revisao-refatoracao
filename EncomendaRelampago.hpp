#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula();
		void print();
    void cadastroRelampago(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario);

};

#endif