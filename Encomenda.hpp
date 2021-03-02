#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
	public:
		double calcula(){
			
			double x = this->PESO * this->CUSTOkg;
			
			if(this->relampago){
				
				x *= 1.25;
			}
			
			return x;
		}
		void print(){

			cout << "[Remetente]" << endl;
			this->remetente.print();
			cout << "[Destinatário]" << endl;
			this->dest.print();
			
			if(!this->relampago){
				cout << "[Encomenda Normal]" << endl;
				cout << "  Peso: " << this->PESO << endl
					<< "  Custo por kg: " << this->CUSTOkg << endl
					<< "  Custo total: " << this->T << endl;
			}
			
			else{
				cout << "[Encomenda Relâmpago]" << endl;
				cout << "  Peso: " << this->PESO << endl
					<< "  Custo por kg: " << this->CUSTOkg << endl
					<< "  Taxa adicional: " << 0.25 << endl
					<< "  Custo total: " << this->T << endl;
				
		}
		bool prioridade(){
			
			return this->relampago;
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
