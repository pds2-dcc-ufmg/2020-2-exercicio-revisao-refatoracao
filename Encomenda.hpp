#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
class Encomenda: public Geral{
	double peso = 0.0;
	double custoKg = 0.0;
	double custoTotal = 0.0;
	Cliente remetente;
	Cliente destinatario;

	public:	
		Encomenda(){}
		Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario):
				peso(peso), custoKg(custoKg), remetente(remetente), destinatario(destinatario){}
		
		double getPeso(){ return peso; }
		double getCustoKg() { return custoKg; }
		double getCustoTotal() { return custoTotal; }
		Cliente getRemetente() { return remetente; }
		Cliente getDestinatario() { return destinatario; }

		void setPeso(double peso){ this->peso = peso; }
		void setCustoKg(double custoKg) { this->custoKg = custoKg; }
		void setCustoTotal(double custoTotal){ this->custoTotal = custoTotal; }
		void setRemetente(Cliente remetente) { this->remetente = remetente; }
		void setDestinatario(Cliente destinatario) { this->destinatario = destinatario; }		

		void print();
		virtual double calcula() = 0;

};

#endif