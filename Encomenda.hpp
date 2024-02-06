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
		void set_PESO(double peso)//seta o peso da encomenda
		{
			PESO = peso;
		}
		 void set_CUSTOkg(double custoKg)//seta o custo por kilo da encomenda
                {
                	CUSTOkg = custoKg;
                }
		void set_T(double t)
                {
	                T = t;
                }
		void set_remetente(Cliente Remetente)//seta o remetente da encomenda
		{
			remetente = Remetente;

		}
		void set_dest(Cliente Dest)
		{
			dest = Dest;

		}

};

#endif

