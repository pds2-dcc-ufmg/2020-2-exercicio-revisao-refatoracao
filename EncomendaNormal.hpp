#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
	EncomendaNormal(double P,double C,Cliente* r, Cliente* d){
		this->PESO= P;
		this->CUSTOkg= C;
		this->remetente=r;
		this->dest=d;
	}
	
	double calcula(){

		double x = PESO * CUSTOkg;
		this->T = x;
		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;

	}

	void relatorio_enc(double *custN){
	this->calcula();
	this->print();
	*custN += this->calcula();
	std::cout << endl;

	}

	

};

#endif