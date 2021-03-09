#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#include "Encomenda.hpp"
#include "Cliente.hpp"

const double taxa = 0.25;
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custoKg;
			x += x * taxa;
			
			return x;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << total << endl;

		}

};

#endif
