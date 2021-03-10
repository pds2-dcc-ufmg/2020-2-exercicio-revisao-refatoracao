
#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double Peso = 0.0, CustoKg = 0.0,  CustoTotal = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			cout << "[Remetente]" << endl;
			remetente.print();
			cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif
