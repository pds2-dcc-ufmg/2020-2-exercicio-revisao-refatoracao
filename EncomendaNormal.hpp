#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

	double calcula(); // calcula o valor do custo total: (custo por kg * peso)

	void print(); // imprime na tela os dados do peso , custo por kg e custo total da encomenda

};

#endif
