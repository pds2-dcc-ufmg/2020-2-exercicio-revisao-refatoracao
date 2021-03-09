#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago(double _peso, double _custokg, Cliente _remetente, Cliente _destinatario){
	this->Peso = _peso;
	this->CustoKg = _custokg;
	this->Remetente = _remetente;
	this->Destinatario = _destinatario;
}


double EncomendaRelampago::calcula(){
	
	this->CustoTotal = (Peso * CustoKg)*(1+TaxaAdicional);
	
	return this->CustoTotal;
}

void EncomendaRelampago::print(){

	Encomenda::printRemDes();
	
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	std::cout << "  Peso: " << Peso << std::endl
		<< "  Custo por kg: " << CustoKg << std::endl
		<< "  Taxa adicional: " << TaxaAdicional << std::endl
		<< "  Custo total: " << CustoTotal << std::endl;

}

std::string EncomendaRelampago::getType(){
	return "Relampago";
}