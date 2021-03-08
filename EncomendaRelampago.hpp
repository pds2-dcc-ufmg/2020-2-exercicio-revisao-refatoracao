#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	private: // Taxa definida.

		float taxa = 0.25;

	public: // Métodos implementados em EncomendaRelampago.cpp

		double calcula_custo_total();
		void print();
		float get_taxa();
		void set_taxa(float _taxa);

};

#endif
