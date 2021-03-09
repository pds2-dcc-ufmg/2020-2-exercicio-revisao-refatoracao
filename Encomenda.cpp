#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::print(){

	std::cout << "[Remetente]" << std::endl;
	_remetente.print();

	std::cout << "[Destinatário]" << std::endl;
	_dest.print();

}

double Encomenda::calcula(){

	double x = _peso * _custoKg;

	return x;

}
