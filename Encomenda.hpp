#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	private:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		Cliente remetente;
		Cliente dest;

	public:

		void setPeso(int novoPeso){
			PESO = novoPeso;
		}

		void setCusto(int novoCusto){
			CUSTOkg = novoCusto;
		}

		void setRemetente(Cliente R){
			remetente = R;
		}

		void setDest(Cliente destinatario){
			dest = destinatario;
		}

		double getPeso(){
			return PESO;
		}

		double getCusto(){
			return CUSTOkg;
		}
	
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

};

#endif