#include <iostream>
#include <iomanip>
#include "EncomendaNormal.hpp"

int EncomendaNormal::numeroDeEncomendas = 0;
double EncomendaNormal::precoTotalDasEncomendas = 0.0;

void EncomendaNormal::relatorio(){
  std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << numeroDeEncomendas
		 << "\nValor Total: " << precoTotalDasEncomendas
		 << std::endl;
}

EncomendaNormal::EncomendaNormal(double peso, double custoKg, Cliente* remetente, Cliente* destinatario){
  this->peso = peso;
  this->custoKg = custoKg;
  this->remetente = remetente;
  this->destinatario = destinatario;
  EncomendaNormal::numeroDeEncomendas++;
  EncomendaNormal::precoTotalDasEncomendas+= this->calculaCustoTotal();
}

void EncomendaNormal::print() {
  Encomenda::print();
  std::cout << "[Encomenda Normal]" << std::endl;
  std::cout << "  Peso: " << this->peso << std::endl
    << "  Custo por kg: " << this->custoKg << std::endl
    << "  Custo total: " << this->calculaCustoTotal() << std::endl;
}