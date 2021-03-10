
#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = Peso * CustoKg;
			x += x * 0.25;
			
			return x;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << Peso<< endl;
				cout << "  Custo por kg: " << CustoKg << endl;
				cout << "  Taxa adicional: " << 0.25 << endl;
			cout << "  Custo total: " << CustoTotal << endl;

		}

};

#endif
