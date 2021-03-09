#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = getPeso() * getCusto();
			x += x * 0.25;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCusto() << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << calcula() << endl;

		}

};

#endif