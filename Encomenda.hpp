#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

using namespace std;

class Encomenda{

	public:

		double _peso = 0.0;
		double _custoKg = 0.0;
		double _total = 0.0;
		Cliente _remetente;
		Cliente _dest;
			
		void print();
	
};

#endif
