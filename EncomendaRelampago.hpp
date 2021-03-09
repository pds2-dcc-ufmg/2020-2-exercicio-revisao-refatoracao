#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaRelampago: public Encomenda{
    private:
    int TAXARELAMPAGO = 0.25;
    
	public:

		double calcula(){

			double x = PESO * CUSTOkg;
			x += x * TAXARELAMPAGO;
			
			return x;
		}

        void print override();
    
};

#endif
