#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#define indiceMultiplicador 0.25

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custoKg;
			x += x * indiceMultiplicador;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << indiceMultiplicador << endl
				<< "  Custo total: " << valor << endl;

		}

};

#endif
