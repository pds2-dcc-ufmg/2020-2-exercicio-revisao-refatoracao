#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	
	public:
		//funciona como um construtor da classe
		void set(bool prioridade, int peso, int custokg, Cliente remetente, Cliente destinatario);
		//Calcula o preço total da entrega
		double calcula();
		//Imprimi as informações da entrega
		void print();
		//Indica se há prioridade
		bool prioridade();
	
	private:
		
		bool Prioridade = 0;
		double Peso = 0.0;
		double CustoKg = 0.0;
		double Total = 0.0;
		Cliente Remetente;
		Cliente Destinatario;

};

#endif
