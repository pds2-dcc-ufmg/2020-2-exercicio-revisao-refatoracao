#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	private:
	
		const double TaxaAdicional = 0.25;
		
	public:
		
		EncomendaRelampago(){}; //Construtor normal.
		
		EncomendaRelampago(double, double, Cliente, Cliente); //Construtor completo. Peso, custo, remetente, destinatario.

		double calcula() override; //Calcula e retorna o CustoTotal

		void print() override; //Imprime os dados da encomenda

		std::string getType() override; //Retorna o typo de encomenda(Relampago)
};

#endif