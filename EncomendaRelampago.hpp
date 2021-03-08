#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

const double TAXA_ADICIONAL = 0.25;

class EncomendaRelampago: public Encomenda{

	public:

	    EncomendaRelampago(Cliente remetente,Cliente destinatario,double peso,double custoPorkg);

		double calcula();

		void print();
};

#endif
