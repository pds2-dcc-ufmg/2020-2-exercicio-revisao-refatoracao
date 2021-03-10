#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda
{

public:
	double peso = 0.0;
	double custo_kg = 0.0;
	double custo_total = 0.0;
	Cliente remetente;
	Cliente destino;

	void print()
	{

		cout << "[Remetente]" << endl;
		remetente.print();
		cout << "[Destinatário]" << endl;
		destino.print();
	}
};

#endif