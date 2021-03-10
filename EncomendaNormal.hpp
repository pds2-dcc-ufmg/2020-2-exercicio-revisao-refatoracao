#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	private:

		const double CUSTOkg = 12.0;

	public:

		double calculaTotal(){

			double custoTotal = getPeso() * CUSTOkg;

			return custoTotal;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Normal]" << endl
                 << "  Peso: " << getPeso() << endl
                 << "  Custo por kg: " << CUSTOkg << endl
                 << "  Custo total: " << calculaTotal() << endl;
		}
};

#endif
