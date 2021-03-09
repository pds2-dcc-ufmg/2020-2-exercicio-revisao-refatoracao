#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:
		
		Encomenda(double peso, double custo_por_kg,
				  Cliente remetente, Cliente destinatario){
					  this->peso = peso;
                      this->custo_por_kg = custo_por_kg;
                      this->destinatario = destinatario;
                      this->remetente = remetente;
				  }

		Encomenda(double peso,
				  Cliente remetente, Cliente destinatario){
					  this->peso = peso;
                      this->destinatario = destinatario;
                      this->remetente = remetente;
				  }

		void print(); // Imprime na tela os dados de uma encomenda
	
	protected:
		
		double peso;
		double custo_por_kg;
		double custo_total = 0;
		Cliente remetente;
		Cliente destinatario;

};

#endif