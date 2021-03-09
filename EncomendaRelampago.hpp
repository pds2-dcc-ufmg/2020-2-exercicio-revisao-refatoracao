#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double EncomendaRelampago::calcularPreco(){

			double precoTotal = PESO * CUSTOkg;   
			
			
			return precoTotal;
		}



		void EncomendaRelampago::print(){ 

			
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << 1.25 * this->calcularPreco() << endl; 

		}

};

#endif