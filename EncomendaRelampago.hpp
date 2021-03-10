#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calculaValor(){
			std::cout << endl;
			double x = peso * custokg;
			x += x * 0.25;
			return x;
		}

		void imprimeEncomenda(){
			Encomenda::imprimeDadosCliente();
			std::cout << "[Encomenda Relâmpago]" << endl
			    << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custokg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;

		}
};

#endif
