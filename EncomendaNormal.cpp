#include "EncomendaNormal.hpp"

double EncomendaNormal::calcula(){
	return getPeso() * getCustoKg();
}

void EncomendaNormal::print(){

	Encomenda::print();
	std::cout << "[Encomenda Normal]" << endl;
	std::cout << "  Peso: " << getPeso() << endl
		<< "  Custo por kg: " << getCustoKg() << endl
		<< "  Custo total: " << getCustoTotal() << endl;

}