#ifndef EncomendaNormal_H
#define EncomendaNormal_H
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

	double calculaPreco();
	void printEncomenda();

};

#endif
