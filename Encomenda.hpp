#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	protected:

		double peso;
		double custoKg;
		double custoTotal = 0.0;
	
	public:
		
		Cliente remetente;
		Cliente dest;
			
	public:

		Encomenda(double _peso,double _custoKg) : peso(_peso), custoKg(_custoKg){};
		
		virtual double calcularValor(){};
		
		virtual void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif