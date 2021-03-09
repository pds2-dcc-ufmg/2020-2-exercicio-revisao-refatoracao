#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	public:
		//Getters:
		double getPeso();
		double getCusto();
		
		//Setters:
		void setPeso(double peso);
		void setCustoKg(double custo);
		
		//Imprimir dados:
		void print() override {
			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
	private:
		//Atributos:
		double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente dest;
};

#endif
