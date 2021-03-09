#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

#define PRICE_INCREASE_RELAMPAGO 0.25

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double weight, double cost_per_kg, Cliente sender,  Cliente recipient): 	Encomenda(weight, cost_per_kg, sender, recipient){}

		int getClassType() override{
			return 2;
		}

		double calcula() override{

			double x = PESO * CUSTOkg;
			x += x * PRICE_INCREASE_RELAMPAGO;
			
			return x;
		}

		void print() override{

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif