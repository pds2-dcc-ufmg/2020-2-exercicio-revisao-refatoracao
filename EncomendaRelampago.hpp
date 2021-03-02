#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula_custo(){

			double CUSTO_TOTAL = PESO * CUSTOkg;
			CUSTO_TOTAL += CUSTO_TOTAL * TAXA_RELAMPAGO;
			
			return CUSTO_TOTAL;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->get_PESO() << endl
				<< "  Custo por kg: " << this->get_CUSTOkg() << endl
				<< "  Taxa adicional: " << this->TAXA_RELAMPAGO << endl
				<< "  Custo total: " << this->CUSTO_TOTAL << endl;

		}
	private:
	double TAXA_RELAMPAGO = 0.25;

};

#endif