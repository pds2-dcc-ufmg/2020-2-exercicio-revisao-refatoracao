#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda {

public:

	double calculaTotal() { //retorna custo total de uma encomenda normal

		custoTotal = valorTotalBase();

		return custoTotal;
	}

	void printEncomenda() { // imprime as informacoes de uma encomenda normal

		Encomenda::printEncomenda();
		std::cout << "[Encomenda Normal]" << endl;
		Encomenda::printInfoBase();
		

	}

};

#endif