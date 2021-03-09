#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	double calculaPreco(){//Função para calcular o valor da encomenda.

		double PRECO = PESO * CUSTOkg;

		return PRECO;
	}

	void print(){//Para imprimir os dados da encomenda.

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << TOTAL << endl;

	}

};

#endif
