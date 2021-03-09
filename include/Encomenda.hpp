#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double peso = 0.0;
		double custoKg = 0.0;
    double TAXA = 0.0;
		Cliente* remetente;
		Cliente* destinatario;

  public:

		double calculaCustoTotal();
		virtual void print();

};

#endif