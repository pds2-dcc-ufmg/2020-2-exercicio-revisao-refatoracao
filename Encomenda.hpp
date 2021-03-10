#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	privated:

		double peso = 0.0;
		double custoKg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
		double getPeso(){
			return peso;
		}
		double getCusto(){
			return custoKg;
		}
		double getT(){
			return T;
		}
		Cliente getRemetente(){
			return remetente;
		}
		Cliente getDest(){
			return dest;
		}

};

#endif
