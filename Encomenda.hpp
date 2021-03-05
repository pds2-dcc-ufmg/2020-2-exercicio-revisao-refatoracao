#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
			if(classe == "normal"){
			std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << PESO << endl
			<< "  Custo por kg: " << CUSTOkg << endl
			<< "  Custo total: " << T << endl;
			}
			if(classe == "relampago"){
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;
			}		
		}
		double calcula(){
		valor = PESO * CUSTOkg;
		if(classe == "relampago"){
		valor += valor * 0.25;}
		return valor;
		}
	
	private:
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;
		string classe;
		double valor = 0;
	

};

#endif
