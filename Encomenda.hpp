#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
			
		void print(){

			std::cout << "[Remetente]" << endl;
			this->getRemetente().print();
			std::cout << "[Destinatário]" << endl;
			this->getDest().print();
		}
	
	        void setPeso(double _peso){
			
			this->peso=_peso;
		}
	        
	        void setCustoKg(double _custoKg){
			
			this->custoKg=_custoKg;
		}
	        
	        void setRemetente(Cliente _remetente){
			
			this->remetente=_remetente;
		}
	
	        void setDest(Cliente _dest){
			
			this->dest=_dest;
		}
	        
		double getPeso(){
			
			return this->peso;
		}
	        
	        double getCustoKg(){
			
			return this->custoKg;
		}	
	
	        double getCustoTotal(){
			
			return this->custoTotal;
		}
	
	        Cliente getRemetente(){
			
			return this->remetente;
		}
	
                Cliente getDest(){
			
			return this->dest;
		} 	
	        
	private:
	
	        double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente dest;

};

#endif
