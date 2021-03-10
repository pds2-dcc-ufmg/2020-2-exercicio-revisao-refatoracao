#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

//Implementação do construtor da classe Encomenda Normal...
EncomendaNormal::EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario){

	this->peso = peso;
	this->custoKg = custoKg;
	this->remetente = remetente;
	this->destinatario = destinatario;
}

//Implementação da função para calcular o preço da encomenda normal...
double EncomendaNormal::calculaPreco(){

	return peso * custoKg;
}

//Implementação da função para impressão do remetente e do destinatario da encomenda normal...
void EncomendaNormal::print(){

	Encomenda::print();
	std::cout << "[Encomenda Normal]" << endl;
	std::cout << "  Peso: " << peso << endl
		<< "  Custo por kg: " << custoKg << endl
		<< "  Custo total: " << custoTotal << endl;

}