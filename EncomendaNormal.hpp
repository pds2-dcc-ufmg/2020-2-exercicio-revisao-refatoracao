#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda
{
	public:	
		double calculaCustoFinal()
		{
			return (getPeso() * getCustokg());
		}

		void printEncomendaNormal()
		{
			Encomenda::printEncomenda();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustokg() << endl
				<< "  Custo total: " << getCustoTotal() << endl;
		}
};

#endif