#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

	public:
		
        double calcula(){

            double x = PESO * CUSTOkg;

            return x;
        }

        void print override();

#endif
