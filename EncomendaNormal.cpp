#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"


double EncomendaNormal::calcula(){

    double x = this->PESO * this->CUSTOkg;

	return x;
}

void EncomendaNormal::print(){
    
		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		dest.print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << this->PESO << endl
			<< "  Custo por kg: " << this->CUSTOkg << endl
			<< "  Custo total: " << this->T << endl;
}