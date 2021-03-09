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

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << TAXARELAMPAGO << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif
