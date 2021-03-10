#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOKG = 0.0;
		double SOMATORIA = 0.0;
		Cliente REMETENTE;
		Cliente DEST;
			
		void print(){

		cout << "[Remetente]" << endl;
		REMETENTE.print();
		cout << "[Destinatário]" << endl;
		DEST.print();
		
		}
		};

#endif
