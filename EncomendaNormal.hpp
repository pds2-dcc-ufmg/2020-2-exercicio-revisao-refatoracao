#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	private:
	double custo;

	public:
		
	double calcula(){

		custo = PESO * CUSTOkg;

		return custo;
	}

	void print(){

		Encomenda::print();
		cout << "[Encomenda Normal]" << endl;
		cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << custo << endl;

	}

	void executarTudo(){

		EncomendaNormal::calcula();
		EncomendaNormal::print();
		cout << endl;

	}

	EncomendaNormal(double PESO, double CUSTOkg, Cliente REMETENTE, Cliente DEST) : Encomenda(PESO, CUSTOkg, REMETENTE, DEST) { }

};

#endif