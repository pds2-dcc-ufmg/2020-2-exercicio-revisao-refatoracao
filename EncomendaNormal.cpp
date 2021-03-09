#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){

		return Encomenda::calcula();
  
}

void EncomendaNormal::print(){

		Encomenda::print();
  
		std::cout << "[Encomenda Normal]" << std::endl;
  
		std::cout << "  Peso: " << _peso << std::endl
			<< "  Custo por kg: " << _custoKg << std::endl
			<< "  Custo total: " << _total << std::endl;

}
