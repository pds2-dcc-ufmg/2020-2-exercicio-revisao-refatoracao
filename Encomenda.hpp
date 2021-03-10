#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		Cliente remetente;
		Cliente destinatario;


        double CustoTotal(){

            double x = PESO * CUSTOkg;

            return x;
	}



		void print(){

			cout << "[Remetente]" << endl;
			remetente.print();
			cout << "[Destinatário]" << endl;
			destinatario.print();
		}
//imprime os dados do remetente e destinatário
};

#endif
