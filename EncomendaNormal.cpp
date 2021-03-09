#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){

		double x = _peso * _custoKg;

		return x;
  
}

void EncomendaNormal::print{

		Encomenda::print();
  
		std::cout << "[Encomenda Normal]" << endl;
  
		std::cout << "  Peso: " << _peso << endl
			<< "  Custo por kg: " << _custoKg << endl
			<< "  Custo total: " << _total << endl;

}
