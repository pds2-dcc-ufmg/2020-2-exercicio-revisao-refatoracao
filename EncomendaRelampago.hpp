#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:
	double custo;

	public:

		double calcula(){

			custo = PESO * CUSTOkg;
			custo += custo * 0.25;
			
			return custo;
		}

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << custo << endl;

		}
		
		void executarTudo(){

			EncomendaRelampago::calcula();
			EncomendaRelampago::print();
			cout << endl;

		}

		EncomendaRelampago(double PESO, double CUSTOkg, Cliente REMETENTE, Cliente DEST) : Encomenda(PESO, CUSTOkg, REMETENTE, DEST) { }

};

#endif