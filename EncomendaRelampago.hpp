#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){
			 
			double x = PESO * CUSTOkg;
			x += x * taxa;
			
			return x;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << PESO << endl;
			cout << "  Custo por kg: " << CUSTOkg << endl;
			cout << "  Taxa adicional: " << taxa << endl;
			cout << "  Custo total: " << T << endl;

		}

};

#endif
