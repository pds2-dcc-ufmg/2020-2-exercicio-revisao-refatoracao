#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		virtual double calcula() override;

		virtual void print() override;
	
	private:
		double constante = 0.25;
};

#endif
