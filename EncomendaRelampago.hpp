#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			const double taxa_adc = 0.25;
			double total = peso * custo_kg;
			total += total * taxa_adc;
			
			return total;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl;
			std::cout << "  Custo por kg: " << custo_kg << endl;
			std::cout << "  Taxa adicional: " << taxa_adc << endl;
			std::cout << "  Custo total: " << custo_total << endl;

		}

};

#endif