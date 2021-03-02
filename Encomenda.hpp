#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	
	public:
		//funciona como um construtor da classe
		void set(bool prioridade, int peso, int custokg, Cliente Remetente, Cliente Destinatario);
		//Calcula o preço total da entrega
		double calcula();
		//Imprimi as informações da entrega
		void print();
		//Indica se há prioridade
		bool prioridade();
	
	private:
		
		bool relampago = 0;
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
