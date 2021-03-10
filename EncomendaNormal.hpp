#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

		//Construtor da classe EncomendaNormal...
		EncomendaNormal::EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario);

		//Interface da função para calcular o preço da encomenda normal...
		double calculaPreco();

		//Interface da função para impressão do remetente e do destinatario da encomenda normal...
		void print();

};

#endif