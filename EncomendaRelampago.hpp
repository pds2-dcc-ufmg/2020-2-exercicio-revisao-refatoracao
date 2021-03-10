#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:


        EncomendaRelampago( double peso, 
		                    double custoKg,
		                    Cliente remetente,
		                    Cliente dest ): Encomenda( peso, 
		                                               custoKg,
		                                               remetente,
		                                               dest ) {}

		double calcula(){

			double x = _peso * _custoKg;
			x += x * 0.25;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoKg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << _custoTotal << endl;

		}

};

#endif