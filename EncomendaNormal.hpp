#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

	double calculaPreco(){

		double preco = peso * custoKg;

		return preco;
	}

	void printEncomenda(){ // imprime na tela os dados de uma encomenda cadastrada

		Encomenda::printEncomenda();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custoKg << endl
			<< "  Custo total: " << custoTotal << endl;

	}

};

#endif
