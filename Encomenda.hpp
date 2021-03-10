#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;
using std::string;

class Encomenda
{       
    	public:
		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
		Cliente remetente;
		Cliente destinatario;
	    
	        Encomenda(double _peso, double _custo_kg, Cliente _remetente, Cliente _destinatario)
	        {
	            	this->peso = _peso;
	            	this->custo_kg = _custo_kg;
	            	this->remetente = _remetente;
			this->destinatario = _destinatario;
           	 }
			
		 void print()
		{
			std::cout << "[Remetente]" << endl;
			this->remetente.print();
			std::cout << "[Destinatário]" << endl;
			this->destinatario.print();
		}

};

#endif
