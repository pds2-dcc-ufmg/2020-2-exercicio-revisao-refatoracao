#include <iostream>
#include "EncomendaRelampago.hpp"


double EncomendaRelampago :: calcula(){
	double x = peso * custokg;
	x += x * 0.25;
	return x;
}

void EncomendaRelampago :: print(){
		
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << peso << endl
	<< "  Custo por kg: " << custokg << endl
	<< "  Taxa adicional: " << 0.25 << endl
	<< "  Custo total: " << total << endl;

}