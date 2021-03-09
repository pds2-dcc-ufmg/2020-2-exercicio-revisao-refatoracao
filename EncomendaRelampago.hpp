#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){
			
			double taxa = 0.25; 
			double x = PESO * CUSTOkg;
			x += x * taxa;
			
			return x;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif
