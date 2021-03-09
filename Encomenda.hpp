#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda
{

	protected:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
	public:		
		void print()
		{

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
		void set_PESO(double peso)
		{
			PESO = peso;
		}
		 void set_CUSTOkg(double custoKg)
                {
                	CUSTOkg = custoKg;
                }
		void set_T(double t)
                {
	                T = t;
                }

};

#endif

