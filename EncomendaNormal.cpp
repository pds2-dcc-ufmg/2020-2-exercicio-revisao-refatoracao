#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){

		double x = _peso * _custoKg;

		return x;
  
}

void EncomendaNormal::print(){

		Encomenda::print();
  
		std::cout << "[Encomenda Normal]" << std::endl;
  
		std::cout << "  Peso: " << _peso << std::endl
			<< "  Custo por kg: " << _custoKg << std::endl
			<< "  Custo total: " << _total << std::endl;

}
