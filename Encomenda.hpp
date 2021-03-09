#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda
{

public:
  Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario);

	double peso = 0.0;
	double custoKg = 0.0;
	double t = 0.0;
	Cliente remetente;
	Cliente destinatario;

	void print();
};

#endif