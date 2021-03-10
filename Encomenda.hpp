#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda
{

protected:
	double PESO = 0.0;
	double CUSTOkg = 0.0;
	double taxaAdicional = 0.0;
	Cliente remetente;
	Cliente dest;

public:
	Encomenda();
	Encomenda(double peso, double custo, Cliente _remetente, Cliente destinatario);

	void print();

	double getPeso();
	void setPeso(double peso);

	double getCustoKG();
	void setCustoKG(double custoKG);

	double getT();
	void setT(double T);

	Cliente getRemetente();
	void setRemetente(Cliente remetente);

	Cliente getDest();
	void setDest(Cliente destinatario);
};

#endif