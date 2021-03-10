#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#define taxa_adicional 0.25

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = PESO * CUSTOkg;
			x += x * taxa_adicional;
			return x;
		}

		void print(){

			Encomenda::print();
			cout	<< "[Encomenda Relâmpago]" << endl;
			cout	<< "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << taxa_adicional << endl
				<< "  Custo total: " << T << endl;
		}

};

#endif
