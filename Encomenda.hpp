#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
	//Classe abstrata, representa uma Encomenda qualquer.
	public:
	
		virtual void print() = 0; //Imprime os dados da encomenda.
		
		virtual double calcula() = 0; //Calcula e retorna o CustoTotal.
		
		virtual std::string getType() = 0; //Retorna o tipo de encomenda.
		
	protected:
	
		void printRemDes(); // Imprime remetente e destinatario.
		double Peso = 0.0;
		double CustoKg = 0.0;
		double CustoTotal = 0.0;
		Cliente Remetente;
		Cliente Destinatario;
};

#endif