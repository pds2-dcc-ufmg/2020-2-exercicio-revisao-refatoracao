#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:


		void print(){

			Encomenda::print();

			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
                      << "  Custo por kg: " << CUSTOkg << endl
                      << "  Taxa adicional: " << CustoTotal() * 0.25 << endl
                      << "  Custo total: " << CustoTotal() * 1.25 << endl;

		}

};

#endif
