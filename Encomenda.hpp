#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;
 
class Encomenda{

	private:

		double Peso = 0.0;
		double CustoKg = 0.0;
		double CustoTotal = 0.0; 
		Cliente Remetente;
		Cliente Destinatario;

     	
	public:
		
		Encomenda(double _Peso, double _CustoKg, Cliente _Remetente, Cliente _Destinatario) : Peso(_Peso), CustoKg(_CustoKg),
	 Remetente(_Remetente), Destinatario(_Destinatario) {}

	     double GetPeso(){ 
			 return this->Peso;
		 }	
		 double GetCustoKg(){ 
			 return this->CustoKg;
		 }	
		 double GetCustoTotal(){ 
			 return this->CustoTotal;
		 }	
		 Cliente GetRemetente(){ 
			 return this->Remetente;
		 }		
		 Cliente GetDestinatario(){ 
			 return this->Destinatario;
		 }	


		void print(){

			std::cout << "[Remetente]" << endl;
			Remetente.print();
			std::cout << "[Destinatário]" << endl;
			Destinatario.print();
		}
		

};

#endif