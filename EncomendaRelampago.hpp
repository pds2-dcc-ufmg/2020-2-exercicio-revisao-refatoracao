#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public Encomenda {

public:

	double calculaTotal() { //retorna custo total de uma encomenda relampago

		
		custoTotal = valorTotalBase();
		custoTotal += custoTotal * TAXA_ADICIONAL;

		return custoTotal;
	}

	void printEncomenda() { //imprime as informacoes da encomenda relampago 

		Encomenda::printEncomenda();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Taxa adicional: " << TAXA_ADICIONAL << endl;
		Encomenda::printInfoBase();

	}


};

#endif