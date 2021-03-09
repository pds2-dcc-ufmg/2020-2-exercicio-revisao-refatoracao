#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	public:	
		EncomendaNormal(double peso, double custo,Cliente remetente, Cliente destinatario):Encomenda(peso,custo, remetente,destinatario){
			EncomendaNormal::quantidade_normal++;
		}
		void calcula();
		void print();
		int get_quantidade();

	private:
		static int quantidade_normal;
};

#endif