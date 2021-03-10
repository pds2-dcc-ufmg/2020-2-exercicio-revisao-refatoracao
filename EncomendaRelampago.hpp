#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double taxa = 0.0;

		double calcula(){

			double total = peso * custoKg;
			total = 0.25;
			total += total * taxa;
			
			return total;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << total << endl;

		}

};

#endif
