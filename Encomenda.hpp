#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda
{
protected:
	double peso;
	double custoKg;
	double total;
	Cliente remetente;
	Cliente destinatario;

public:
	Encomenda();
	Encomenda(double peso, double custoKg, double total, Cliente remetente, Cliente destinatario);
	double getPeso();
	void setPeso(double peso);
	double getCustoKg();
	void setCustoKg(double custoKg);
	double getTotal();
	void setTotal(double total);
	Cliente getRemetente();
	void setRemetente(Cliente remetente);
	Cliente getDestinatario();
	void setDestinatario(Cliente destinatario);
	void print();
};

#endif