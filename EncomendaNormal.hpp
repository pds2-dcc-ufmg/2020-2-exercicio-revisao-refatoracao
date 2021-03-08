#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public: // Métodos implementados em EncomendaNormal.cpp
		
		double calcula_custo_total();
		void print();

};

#endif
