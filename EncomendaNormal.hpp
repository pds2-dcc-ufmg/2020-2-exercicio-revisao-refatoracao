#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	
		EncomendaNormal(){}; //Construtor normal.
	
		EncomendaNormal(double, double, Cliente, Cliente);//Construtor completo. Peso, custo, remetente, destinatario.
		
		double calcula() override; //Calcula e retorna o CustoTotal

		void print() override; //Imprime os dados da encomenda
		
		std::string getType() override; //Retorna o typo de encomenda(Normal)
		
};

#endif