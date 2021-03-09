#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal(double peso, double custoKg, Cliente &remetente, Cliente &dest) : Encomenda(peso, custoKg, remetente, dest) {};
		double calcula(); //Calcula o custo total da encomenda normal.
		void print(); //Imprime o mesmo que Encomenda mais os dados de peso e custo referentes a Encomenda Normal.

};

#endif
