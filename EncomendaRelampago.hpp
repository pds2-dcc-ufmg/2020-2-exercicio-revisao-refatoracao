#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double P,double C,Cliente* r, Cliente* d){
		this->PESO= P;
		this->CUSTOkg= C;
		this->remetente=r;
		this->dest=d;
	}

		double calcula(){

			double x = PESO * CUSTOkg;
			x += x * 0.25;
			this->T = x;
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;

		}

	void relatorio_enc(double *custR){
		this->calcula();
		this->print();
		*custR += this->calcula();
		std::cout << endl;
	}

};

#endif