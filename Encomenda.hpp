#ifndef ENCOMENDA_H
#define ENCOMENDA_H

#include "Cliente.hpp"

class Encomenda{
	public:
		Cliente remetente;
		Cliente destinatario;
		
		Encomenda(double _peso, double _custoKg, Cliente& _remetente, Cliente& _destinatario){
		      peso = _peso;
		      custoKg = _custoKg;
		      remetente = _remetente;
		      destinatario = _destinatario;
    		}
	
		void setCustoTotal(double _custoTotal){
	      		custoTotal = _custoTotal;
	    	}
	
		double getPeso(){
	      		return peso;
	    	}
	
	    	double getCustoKg(){
	      		return custoKg;
	    	}
	
	    	double getCustoTotal(){
	      		return custoTotal;
	    	}

		void print(){
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			destinatario.print();
		}
		
	private:
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
};

#endif
