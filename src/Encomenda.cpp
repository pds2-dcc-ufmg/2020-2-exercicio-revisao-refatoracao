#include <iostream>
#include "Encomenda.hpp"

void Encomenda::print() {
	std::cout << "[Remetente]" << std::endl;
	remetente.print();
	std::cout << std::endl << "[Destinatário]" << std::endl;
	destinatario.print();
}

double Encomenda::calcula() {
	return custoPorKg * massa;
}