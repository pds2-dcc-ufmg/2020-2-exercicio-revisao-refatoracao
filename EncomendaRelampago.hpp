#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calculaPreco(){

			double x = peso * custoKg;
			x += x * 0.25;
			
			return x;
		}

		void printInfo(){

			Encomenda::printInfo();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif
