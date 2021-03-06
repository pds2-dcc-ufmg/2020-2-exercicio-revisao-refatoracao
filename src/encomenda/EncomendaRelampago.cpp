#include <iostream>
#include <string>
#include "../../include/encomenda/EncomendaRelampago.hpp"

double EncomendaRelampago::calculaCusto(){
	return getPesoEncomenda() * getCustoPorKg() + getPesoEncomenda() * getCustoPorKg() * getTaxaAdicional();
}
void EncomendaRelampago::printEncomenda(){
	Encomenda::printEncomenda();
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	std::cout << "  Peso: " << getPesoEncomenda() << std::endl
		<< "  Custo por kg: " << getCustoPorKg() << std::endl
		<< "  Taxa adicional: " << getTaxaAdicional() << std::endl
		<< "  Custo total: " << getCustoTotal() << std::endl;
}
EncomendaRelampago::EncomendaRelampago(double pesoEncomenda, double custoPorKg, Cliente remetente, Cliente destinatario){
			this->setPesoEncomenda(pesoEncomenda);
			this->setCustoPorKg(custoPorKg);
			this->setRemetente(remetente);
			this->setDestinatario(destinatario);
}
double EncomendaRelampago::getTaxaAdicional(){
	return this->taxaAdicional;
}
void EncomendaRelampago::setTaxaAdicional(double taxaAdicional){
	this->taxaAdicional = taxaAdicional;
}