#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custokg;
			x += x * 0.25;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl;
			std::cout << "  Custo por kg: " << custokg << endl;
			std::cout << "  Taxa adicional: " << 0.25 << endl;
			std::cout << "  Custo total: " << custoTotal << endl;

		}

};

#endif
