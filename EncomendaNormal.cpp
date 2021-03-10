#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

void EncomendaNormal::print(){
  Encomenda::print();
	std::cout << "[Encomenda Normal]" << endl
	  << "  Peso: " << PESO << endl
		<< "  Custo por kg: " << CUSTOkg << endl
		<< "  Custo total: " << T << endl;

}

double EncomendaNormal::calcula(){

	double x = PESO * CUSTOkg;

	return x;
}