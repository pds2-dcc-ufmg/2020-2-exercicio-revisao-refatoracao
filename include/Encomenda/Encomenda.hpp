#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda
{
public:
	Encomenda(){};
	Encomenda(double peso, double custoKG, Cliente remetente, Cliente destinatario, double taxa)
		: _peso(peso), _custoKG(custoKG), _remetente(remetente), _destinatario(destinatario), _taxa(taxa){};

	void print();
	virtual void print_sub() = 0;
	double calcula();

	void printPeso();
	void printCustoKG();
	void printTotal();
	void printTaxa();
	void printRemetente();
	void printDestinatario();

	double resultado();

protected:
	double _peso = 0.0;
	double _custoKG = 0.0;
	double _total = 0.0;
	double _taxa = 0.0;
	Cliente _remetente;
	Cliente _destinatario;
};

#endif