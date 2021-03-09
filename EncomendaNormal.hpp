#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public: 
		
	double EncomendaNormal::calcularPreco(){  

		double preco = peso * custokg;  

		return preco;
	}

	void EncomendaNormal::set_peso (double peso) {
		this->peso = peso;
	}

	void EcomendaNormal::print(){

		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custokg << endl
			<< "  Custo total: " << this->calcularPreco() << endl; 

	}

};

#endif