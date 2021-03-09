#include "EncomendaNormal.hpp"
#include "Encomenda.hpp"
#include "Cliente.hpp"

#include <iostream>

EncomendaNormal::EncomendaNormal(double peso, double custoKg)
{
	this->peso = peso;
	this->custoKg = custoKg;
}

double EncomendaNormal::calcula()
{
	return this->getPeso() * this->getCustoKg();
}

void EncomendaNormal::print()
{
	Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
	std::cout << "  Peso: " << this->getPeso() << std::endl
			  << "  Custo por kg: " << this->getCustoKg() << std::endl
			  << "  Custo total: " << this->getTotal() << std::endl;
}