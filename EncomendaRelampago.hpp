#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:

		const double CUSTOkg = 18.0;
		const double TAXA = 0.25;

	public:

		double calculaTotal(){

			double custoTotal = getPeso() * CUSTOkg;
			custoTotal += custoTotal * TAXA;

			return custoTotal;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl
			     << "  Peso: " << getPeso() << endl
			     << "  Custo por kg: " << CUSTOkg << endl
			     << "  Taxa adicional: " << TAXA << endl
			     << "  Custo total: " << calculaTotal() << endl;

		}
};

#endif
