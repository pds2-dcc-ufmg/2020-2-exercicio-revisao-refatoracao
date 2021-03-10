#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;
const double taxa = 0.25;
class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = this->getPeso() * this->getCusto();
			x += x * taxa;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCusto() << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << this->getT() << endl;

		}

};

#endif
