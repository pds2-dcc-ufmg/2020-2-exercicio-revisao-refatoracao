#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

	double x = PESO * CUSTOkg;
	x += x * 0.25;
			
	return x;
}

void EncomendaRelampago::print(){
  Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << endl
	  << "  Peso: " << PESO << endl
		<< "  Custo por kg: " << CUSTOkg << endl
		<< "  Taxa adicional: " << 0.25 << endl
		<< "  Custo total: " << T << endl;

}
