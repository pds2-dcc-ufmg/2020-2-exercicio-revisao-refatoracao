#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:
		double const TAXA_ADICIONAL = 0.25;

	public:

		double calcula(){

			T = (PESO * CUSTOkg);
			T += T * TAXA_ADICIONAL;			
			return T;
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