#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();

		}
		Encomenda(double _PESO, double _CUSTOkg, double _T, Cliente _remetente, Cliente _dest): PESO(_PESO), CUSTOkg(_CUSTOkg), T(_T), remetente(_remetente), dest(_dest){};
		
};

#endif