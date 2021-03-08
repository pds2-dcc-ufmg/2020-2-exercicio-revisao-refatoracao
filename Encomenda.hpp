#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente dest;
		
		/**
		* Printa na tela as informações da encomenda
		*/
		void print(){
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

		Encomenda();
		
		/**
		* Construtor de encomenda normal usando parametros.
		*/
		Encomenda(double ePeso, double eCUSTOkg, Cliente eRemetente, Cliente eDest){
			this->peso = ePeso;
			this->custoKg = eCUSTOkg;
			this->remetente = eRemetente;
			this->dest = eDest;
			this->custoTotal = 0.0;
		}

		/**
		* Função virtual que precisa ser reescrita pelos outros métodos
		*/
		virtual double CalcularTotal()=0;

};

#endif
