#include <iostream>
#include "EncomendaRelampago.hpp"

void EncomendaRelampago::print_sub()
{
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	this->printPeso();
	this->printCustoKG();
	this->printTaxa();
	this->printTotal();
}