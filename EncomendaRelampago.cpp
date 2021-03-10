#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

//Implementação do construtor da classe EncomendaRelampago...
EncomendaRelampago::EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario){

	this->peso = peso;
	this->custoKg = custoKg;
	this->remetente = remetente;
	this->destinatario = destinatario;
}

//Implementação da função para calculo do preco da encomenda relampago...
double EncomendaRelampago::calculaPreco(){

	return (peso * custoKg) * 0.25;
}

//Implementação da função para impressão do remetente e do destinatario da encomenda relampago...
void EncomendaRelampago::print(){

	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" << endl;
	std::cout << "  Peso: " << PESO << endl
		<< "  Custo por kg: " << CUSTOkg << endl
		<< "  Taxa adicional: " << 0.25 << endl
		<< "  Custo total: " << T << endl;

}