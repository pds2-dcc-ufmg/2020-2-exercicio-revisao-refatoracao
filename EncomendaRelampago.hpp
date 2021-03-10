#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda
{
	public:
		double getTaxaAdd() {return this->_taxaAdicional;}

		double calculaCustoFinal()
		{
			return ((getPeso() * getCustokg()) * (1 + getTaxaAdd()));
		}

		void printEncomendaRelampago()
		{

			Encomenda::printEncomenda();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustokg() << endl
				<< "  Taxa adicional: " << getTaxaAdd() << endl
				<< "  Custo total: " << getCustoTotal() << endl;

		}
	private:
		double _taxaAdicional = 0.25;
};

#endif