#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

  public:
	  void print(){
	  	Encomenda::print();
	  	cout << "[Encomenda Normal]" << endl;
	  	cout << "  Peso: " << getPeso() << endl
	  		<< "  Custo por kg: " << getCustoKg() << endl
	  		<< "  Custo total: " << calculaEntrega() << endl;
	  }

    void realizaEncomenda(EncomendaNormal encomenda, double *custo) {
      encomenda.calculaEntrega();
      encomenda.print();
      *custo += encomenda.calculaEntrega();
      cout << endl;
    }

};

#endif