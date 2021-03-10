#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		Encomenda( double peso, 
		           double custoKg,
		           Cliente remetente,
		           Cliente dest ): _peso( peso ),
				                   _custoKg( custoKg ),
								   _remetente( remetente ),
								   _dest( dest )   {}
			
		void print(){

			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_dest.print();
		}

    protected:

		double _peso = 0.0;
		double _custoKg = 0.0;
		double _custoTotal = 0.0;
		Cliente _remetente;
		Cliente _dest;

};

#endif