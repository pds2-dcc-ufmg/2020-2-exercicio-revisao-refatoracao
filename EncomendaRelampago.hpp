#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

        ~EncomendaRelampago() {}

        EncomendaRelampago( double peso, 
		                    double custoKg,
		                    Cliente remetente,
		                    Cliente dest ): Encomenda( peso, 
		                                               custoKg,
		                                               remetente,
		                                               dest ) {}

		double calcula() override {

			double x = _peso * _custoKg;
			x += x * _taxa;
			
			return x;
		}

		void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoKg << endl
				<< "  Taxa adicional: " << _taxa << endl
				<< "  Custo total: " << _custoTotal << endl;

		}


	private:

        const double _taxa = 0.25;

};

#endif