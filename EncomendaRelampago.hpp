#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	private:
		static int qntdRelampago;
	public:
		EncomendaRelampago(double peso, double custo,Cliente remetente, Cliente destinatario):Encomenda(peso,custo, remetente,destinatario){
			EncomendaRelampago::qntdRelampago++;
		}
		void calcula();
		void print();
		int getQntd();
};

int EncomendaRelampago::qntdRelampago= 0;

#endif
