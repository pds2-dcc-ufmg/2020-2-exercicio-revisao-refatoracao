#include <iostream>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"

double EncomendaNormal::calcularPrecoEnvio(){
	double precoFinal = this->getPeso() * this->getCustoKg();
	return precoFinal;
}

void EncomendaNormal::printDados(){
	std::cout << "[Remetente]" << std::endl;
	this->getRemetente().printDadosCliente();
	std::cout << "[Destinatário]" << std::endl;
	this->getDestinatario().printDadosCliente();
	std::cout << "[Encomenda Normal]" << std::endl;
	std::cout << "  Peso: " << this->getPeso()<< std::endl
		<< "  Custo por kg: " << this->getCustoKg() << std::endl
		<< "  Custo total: " << this->getCustoTotal() << std::endl;
}