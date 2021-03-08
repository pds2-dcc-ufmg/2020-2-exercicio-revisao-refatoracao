#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		virtual void print()= 0;//Função virtual de print

    protected:
        double _peso = 0.0;
		double _custoPorkg = 0.0;
		Cliente _remetente;
		Cliente _destinatario;

};

#endif
