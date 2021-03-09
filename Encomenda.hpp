#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:
  
		double _peso = 0.0;
		double _custoPorKG = 0.0;
		Cliente _remetente;
		Cliente _destinatario;

	public:

    virtual ~Encomenda() {}
	virtual void print() = 0;
    virtual double calcularCustoTotal() = 0;

};

#endif