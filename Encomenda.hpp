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
			
		void Print(){

		cout << "[Remetente]" << endl;
		REMETENTE.Print();
		cout << "[Destinatário]" << endl;
		DEST.Print();
		
		}
		};

#endif
