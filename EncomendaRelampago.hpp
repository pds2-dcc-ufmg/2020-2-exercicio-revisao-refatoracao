#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	private:
		int TAXA_ADICIONAL = 0.25;

	public:
		EncomendaRelampago();
		EncomendaRelampago(double _peso,double _custo_kg, Cliente _remetente, Cliente _destinatario);
		double calcula() override;
		void print();

};

#endif