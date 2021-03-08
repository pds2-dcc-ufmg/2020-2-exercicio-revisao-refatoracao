#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

    EncomendaRelampago(double mass, double cost, Cliente rement, Cliente dest);

		double calcula() override;

		void print() override;

  private:
  double taxa = 1.25;

};

#endif
