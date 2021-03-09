#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda
{
	public:
		
	double calcula() // calcula o preço da encomenda
	{

		double x = PESO * CUSTOkg;

		return x;
	}

	void print()//imprime na tela os dados da encomenda 
	{

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;

	}

};

#endif
