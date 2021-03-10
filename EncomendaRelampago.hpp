#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{
	public:
		double calcula(){
			double x = PESO * CUSTOkg;
			x += x * 0.25;
			return x;
		}
		void print(){
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl
			          << "  Peso: " << PESO << std::endl
				  << "  Custo por kg: " << CUSTOkg << std::endl
			 	  << "  Taxa adicional: " << 0.25 << std::endl
				  << "  Custo total: " << T << std::endl;
		}
};

#endif
