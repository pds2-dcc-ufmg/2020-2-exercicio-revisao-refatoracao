#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		EncomendaRelampago(double _PESO, double _CUSTOkg, double _T, Cliente _remetente, Cliente _dest): Encomenda(_PESO, _CUSTOkg, _T,_remetente,_dest){};
		double calcula(){

			double x = PESO * CUSTOkg;
			x += x * 0.25;
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;
			std::cout << endl;
		}

};

#endif