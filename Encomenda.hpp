#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	protected:
		const double _peso;
		const double _custokg;
		const double _custo_total;
		Cliente remetente;
		Cliente destinatario;

	public:
		Encomenda(double peso, double custokg, Cliente remetente, Cliente destinatario): _peso(peso), _custokg(custokg), _custo_total(0.0), remetente(remetente), destinatario(destinatario){}
		Encomenda(): _peso(0.0), _custokg(0.0), _custo_total(0.0){}

		virtual double calcula() const = 0;

		virtual void print() const{
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		}

};

#endif