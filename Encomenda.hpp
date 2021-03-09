#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private: 

		double peso = 0.0;  
		double custokg = 0.0; 
		Cliente remetente;
		Cliente dest;

	public:
		 void set_custokg (double custokg) {
			 this->custokg =  custokg; } ;
		 void set_peso (double peso) {
			 this->peso = peso;
		  };  

		  Encomenda::Encomenda (double peso, double custokg, Cliente remetente, Cliente destinatario) {
			  this->peso = peso;
			  this->custokg = custokg;
			  this->remetente = remetente;
			  this->destinatario = destinatario;
		  }
		
		virtual void  print()  const = 0; 
};

#endif