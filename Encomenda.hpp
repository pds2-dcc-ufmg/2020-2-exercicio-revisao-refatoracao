#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	public:
		double calcula(){
			
			double x = PESO * CUSTOkg;
			
			if(this->relampago){
				
				x *= 1.25;
			}
			
			return x;
		}
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
	
	private:
		
		bool relampago = 0;
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
