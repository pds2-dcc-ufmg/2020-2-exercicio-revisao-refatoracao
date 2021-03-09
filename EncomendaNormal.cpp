#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(double _peso, double _custokg, Cliente _remetente, Cliente _destinatario){
	this->Peso = _peso;
	this->CustoKg = _custokg;
	this->Remetente = _remetente;
	this->Destinatario = _destinatario;
}

double EncomendaNormal::calcula(){
	
	this->CustoTotal = Peso * CustoKg;
	
	return this->CustoTotal;
	
}

void EncomendaNormal::print(){

	Encomenda::printRemDes();
	
	std::cout << "[Encomenda Normal]" << std::endl;
	std::cout << "  Peso: " << Peso << std::endl
		<< "  Custo por kg: " << CustoKg << std::endl
		<< "  Custo total: " << CustoTotal << std::endl;

}

std::string EncomendaNormal::gettype(){
	return "Normal";
}