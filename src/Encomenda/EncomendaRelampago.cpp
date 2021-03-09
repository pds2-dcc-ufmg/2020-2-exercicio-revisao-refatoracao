#include <iostream>
#include "EncomendaRelampago.hpp"

void EncomendaRelampago::print()
{
	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	printPeso();
	printCustoKG();
	printTaxa();
	printTotal();
}