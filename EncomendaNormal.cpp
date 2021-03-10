#include <iostream>
#include "EncomendaNormal.hpp"



double EncomendaNormal :: calcula(){

	double x = peso * custokg;
	return x;

	}


void EncomendaNormal :: print(){

	std::cout << "[Encomenda Normal]" << endl;
	std::cout << "  Peso: " << peso << endl
	<< "  Custo por kg: " << custokg << endl
	<< "  Custo total: " << total << endl;

	}



