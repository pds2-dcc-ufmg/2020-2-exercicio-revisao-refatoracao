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
	
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << Peso << endl
		<< "  Custo por kg: " << CustoKg << endl
		<< "  Taxa adicional: " << TaxaAdicional << endl
		<< "  Custo total: " << CustoTotal << endl;

}

std::string EncomendaRelampago::gettype(){
	return "Relampago";
}