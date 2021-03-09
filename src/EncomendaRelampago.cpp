#include <iostream>
#include "EncomendaRelampago.hpp"

int EncomendaRelampago::numeroDeEncomendas = 0;
double EncomendaRelampago::precoTotalDasEncomendas = 0.0;

void EncomendaRelampago::relatorio(){
  std::cout << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << numeroDeEncomendas
		 << "\nValor Total: " << precoTotalDasEncomendas
		 << std::endl;
};

EncomendaRelampago::EncomendaRelampago(double peso, double custoKg, Cliente* remetente, Cliente* destinatario){
  this->peso = peso;
  this->custoKg = custoKg;
  this->remetente = remetente;
  this->destinatario = destinatario;
  this->TAXA = 0.25;
  EncomendaRelampago::numeroDeEncomendas++;
  EncomendaRelampago::precoTotalDasEncomendas+= this->calculaCustoTotal();
}

void EncomendaRelampago::print(){
  Encomenda::print();
  std::cout << "[Encomenda Relâmpago]" << std::endl;
  std::cout << "  Peso: " << this->peso << std::endl
    << "  Custo por kg: " << this->custoKg << std::endl
    << "  Taxa adicional: " << this->TAXA << std::endl
    << "  Custo total: " << this->calculaCustoTotal() << std::endl;
}