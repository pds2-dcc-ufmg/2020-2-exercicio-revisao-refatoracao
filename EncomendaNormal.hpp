#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	

	
	double calculaValor(){
		double x = peso * custokg;
		std::cout << endl;
		return x;
	}

	void imprimeEncomenda(){
		Encomenda::imprimeDadosCliente();
		std::cout << "[Encomenda Normal]" << endl
			<< "  Peso: " << peso << endl
			<< "  Custo por kg: " << custokg << endl
			<< "  Custo total: " << T << endl;
	}

};

#endif
