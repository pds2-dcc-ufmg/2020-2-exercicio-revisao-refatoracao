#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	private:
		static int qntdNormal;
		static double custoTotalNormal;

		
	public:	
		EncomendaNormal(double peso, double custo,Cliente remetente, Cliente destinatario):Encomenda(peso,custo, remetente,destinatario){
			EncomendaNormal::qntdNormal++;
		}
		void calcula();
		void print();

		int getQntd();
		
		

};

int EncomendaNormal::qntdNormal = 0;

#endif