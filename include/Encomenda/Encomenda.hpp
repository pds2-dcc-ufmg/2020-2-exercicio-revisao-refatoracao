#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda
{
public:
	void print();
	double calcula();

	void printPeso();
	void printCustoKG();
	void printTotal();
	void printTaxa();
	void printRemetente();
	void printDestinatario();

	void setPeso(double Peso);
	void setCustoKG(double CustoKG);
	void setTotal(double Total);
	void setRemetente(Cliente Remetente);
	void setDestinatario(Cliente Destinatario);

protected:
	double _peso = 0.0;
	double _custoKG = 0.0;
	double _total = 0.0;
	double _taxa = 0.0;
	Cliente _remetente;
	Cliente _destinatario;
};

#endif