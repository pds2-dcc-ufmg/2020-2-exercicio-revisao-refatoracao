#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	protected:
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double CUSTO_TOTAL = 0.0;
		Cliente remetente;
		Cliente dest;
	public:
	    void set_PESO(double PESO){
			this->PESO = PESO;
		}
		void set_CUSTOkg(double CUSTOkg){
			this->CUSTOkg = CUSTOkg;
		}
		void set_CUSTO_TOTAL(double CUSTO_TOTAL){
			this->CUSTO_TOTAL = CUSTO_TOTAL;
		}
		void set_remetente(Cliente remetente){
			this->remetente = remetente;
		}
		void set_dest(Cliente dest){
			this->dest = dest;
		}
	    
		double get_PESO(){
			return this->PESO;
		}	
		double get_CUSTOkg(){
			return this->CUSTOkg;
		}
		double get_CUSTO_TOTAL(){
			return this->CUSTO_TOTAL;
		}
		Cliente get_remetente(){
			return this->remetente;
		}
		Cliente get_dest(){
			return this->dest;
		}

		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif