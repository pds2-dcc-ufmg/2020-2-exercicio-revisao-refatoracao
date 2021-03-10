#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:	

		Encomenda(double peso, double custoKg, Cliente &remetente, Cliente &destinatario) {
			this->peso = peso;
			this->custoKg = custoKg;
			this->remetente = remetente;
			this->destinatario = destinatario;
		}

		void print();

		void setPeso(double peso) { this->peso = peso; }
		void setCustoKg(double custoKg) { this->custoKg = custoKg; }
		void setCustoTotal(double custoTotal) { this->custoTotal = custoTotal; }
		void setRemetente(Cliente &remetente) { this->remetente = remetente; }
		void setDestinatario(Cliente &destinatario) { this->destinatario = destinatario; }

		double getPeso() { return peso; }
		double getCustoKg() { return custoKg; }
		double getCustoTotal() { return custoTotal; }
		Cliente getRemetente() { return remetente; }
		Cliente getDestinatario() { return destinatario; }

	protected:
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;

};

#endif
