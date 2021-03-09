#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
		double calcula(); // Calcula o custo total da encomenda normal.
		void print(); //Imprime o mesmo que Encomenda mais os dados de peso e custo referentes a Encomenda Normal.

};

#endif
