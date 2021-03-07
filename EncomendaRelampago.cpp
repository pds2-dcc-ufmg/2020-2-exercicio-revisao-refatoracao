#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){
	double x = getPeso() * getCustoKg();
	x += x * TAXA_ADICIONAL;			
	return x;
}

void EncomendaRelampago::print(){

	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << getPeso() << endl
		<< "  Custo por kg: " << getCustoKg() << endl
		<< "  Taxa adicional: " << TAXA_ADICIONAL << endl
		<< "  Custo total: " << getCustoTotal() << endl;

}