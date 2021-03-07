#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda: public Sistema{

	double peso = 0.0;
	double custo_kg = 0.0;
	double custo_total = 0.0;
	Cliente remetente;
	Cliente destinatario;

	public:
		Encomenda(){}
		Encomenda(double peso, double custokg, double custo_total, Cliente remetente, Cliente destinatario);
		~Encomenda(){};

		void setPeso		(double peso)		  { this->peso = peso; }
		void setCustoKg		(double custokg)	  { this->custo_kg = custokg; }
		void setCustoTotal  (double custo_total)  { this->custo_total = custo_total; }
		void setRemetente	(Cliente remetente)	  { this->remetente = remetente; }
		void setDestinatario(Cliente destinatario){ this->destinatario = destinatario; }		

		double 	getPeso()		 { return this->peso; }
		double 	getCustoKg()	 { return this->custo_kg; }
		double 	getCustoTotal()	 { return this->custo_total; }
		Cliente getRemetente()	 { return this->remetente; }
		Cliente getDestinatario(){ return this->destinatario; }
			
		void print() override;
		virtual double calcula() = 0;
};

#endif