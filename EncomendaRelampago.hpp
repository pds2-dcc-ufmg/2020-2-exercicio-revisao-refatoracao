#define TAXA_ADICIONAL 0.25

#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda {
	
	public:
		double calcula() { // calcula o preço da encomenda
			double x = PESO * CUSTOkg;
			x += x * TAXA_ADICIONAL;
			return x;
		}
		void print(){
			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL << endl
				<< "  Custo total: " << T << endl;
		}
};

#endif
