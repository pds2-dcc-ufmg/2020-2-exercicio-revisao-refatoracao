#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		//Construtor da classe EncomendaRelampago...
		EncomendaRelampago::EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario);

		//Interface da função para calculo do preco da encomenda relampago...
		double calculaPreco();

		//Interface da função para impressão do remetente e do destinatario da encomenda relampago...
		void print();

};

#endif