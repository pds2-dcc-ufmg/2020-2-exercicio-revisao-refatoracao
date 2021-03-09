#ifndef ENCOMENDA_H
#define ENCOMENDA_H

#include "Cliente.hpp"

using namespace std;

class Encomenda{

	public:

        virtual double calculaCusto();
        virtual void print();


    protected:

        double _Peso;
	double _CustoKg;
	Cliente* _remetente;
	Cliente* _dest;

};

#endif
