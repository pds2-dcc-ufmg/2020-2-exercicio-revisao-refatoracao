#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calculo_encomenda_rapida(){
			
			Encomenda::calculo_padrao();
			double x = calculo_padrao;
			x+=x*0.25;
			
			return x;
		}

		void print(){

			Encomenda::print_cliente();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif
