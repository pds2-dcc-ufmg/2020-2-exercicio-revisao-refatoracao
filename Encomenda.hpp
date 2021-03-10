#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {

private:

	double peso = 0.0;
	double custoKg = 0.0;
	double custoTotal = 0.0;
	Cliente remetente;
	Cliente destinatario;

public:

	Encomenda(double pes, double cust, Cliente remet, Cliente destin) {
		this->peso = pes;
		this->custoKg = cust;
		this->remetente = remet;
		this->destinatario = destin;
	};

	double getpeso(){return this->peso;}
	double getCustoKg(){return this->custoKg;}
	double getCustoTotal(){return this->custoTotal;}
	Cliente getRemetente(){return this->remetente;}
	Cliente getDestinatario(){return this->destinatario;}

	void print() {

		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		destinatario.print();
	}

};

#endif
