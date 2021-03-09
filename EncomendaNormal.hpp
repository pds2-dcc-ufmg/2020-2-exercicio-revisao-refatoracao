#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	private:
		static int qntdNormal;
		

		
	public:	
		EncomendaNormal(double peso, double custo,Cliente remetente, Cliente destinatario):Encomenda(peso,custo, remetente,destinatario){
			EncomendaNormal::qntdNormal++;
		}
		void calcula();
		void print();

		int getQntd();
		
		

};



#endif