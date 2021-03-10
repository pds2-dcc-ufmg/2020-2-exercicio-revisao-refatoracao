#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;
cons double taxa=0.25;
class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custoKg;
			x += x * taxa;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif
