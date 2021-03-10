#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#define taxa_adicional  0.25
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = PESO * CUSTO_kg;
			x += x * taxa_adicional;

			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTO_kg << endl
				<< "  Taxa adicional: " << taxa_adicional << endl
				<< "  Custo total: " << PRECO << endl;

		}

};

#endif
