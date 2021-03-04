#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:
		Encomenda(double peso, double custoKg, double taxaEncomenda, Cliente remetente, Cliente destinatario):
			peso(peso), custoKg(custoKg), taxaEncomenda(taxaEncomenda), remetente(remetente), destinatario(destinatario) {};

		double peso;
		double custoKg;
		double taxaEncomenda;
		Cliente remetente;
		Cliente destinatario;

	public:

	double calculaCustoTotal() {
		double custoTotal = peso * custoKg;
		custoTotal += custoTotal * taxaEncomenda;
		
		return custoTotal;
	}
			
	void print(){

		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		destinatario.print();
	}

};

#endif