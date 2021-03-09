#include <iostream>
#include "EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago()
{
	this->_taxa = 0.25;
}

void EncomendaRelampago::print()
{
	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	this->printPeso();
	this->printCustoKG();
	this->printTaxa();
	this->printTotal();
}